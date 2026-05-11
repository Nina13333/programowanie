#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LosujTablice(int* tab) {
    for (int i = 0; i < 10; i++) {
        *(tab + i) = rand() % 51; 
    }
}

bool SprawdzLiczbe(int* liczba, int* tab) {
    for (int i = 0; i < 10; i++) {
        if (*liczba == *(tab + i)) {
            return true;
        }
    }
    return false;
}

int main() {
    srand(time(NULL));

    int tablica[10];
    int podanaLiczba;
    int proby = 0;

    LosujTablice(tablica);

    cout << "Tablica: ";
    for (int i = 0; i < 10; i++) cout << tablica[i] << " ";
    cout << endl;

    bool czyTrafiono = false;
    while (!czyTrafiono) {
        cout << "Podaj liczbe: ";
        cin >> podanaLiczba;
        proby++;

        if (SprawdzLiczbe(&podanaLiczba, tablica)) {
            cout << "Zgadles!" << endl;
            czyTrafiono = true;
        } else {
            cout << "Nie zgadles" << endl;
        }
    }

    cout << "Zgadles za " << proby << " razem." << endl;

    return 0;
}
