#include <iostream>
using namespace std;

int main() {
    double celsius;
    char wybor;

    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> celsius;

    cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> wybor;

    if (wybor == 'K' || wybor == 'k') {
        cout << "Temperatura w Kelwinach: " << celsius + 273.15 << endl;
    } 
    else if (wybor == 'F' || wybor == 'f') {
        cout << "Temperatura w stopniach Fahrenheita: " << (celsius * 9/5) + 32 << endl;
    } 
    else {
        cout << "Blad: Nieprawidlowy wybor jednostki!" << endl;
    }

    return 0;
}