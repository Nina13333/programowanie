#include <iostream>
using namespace std;

int Oblicz(int n) {
	if (n == 1)
		return 1;
	else
		return n + 	Oblicz(n - 1);
}

int main() {
	
	// int wynik = Oblicz();
	int Liczba;
	cout << "Podaj liczbe: " << endl;
	cin >> Liczba;
	int wynik = Oblicz(Liczba);
	cout << "Suma liczb od 1 do " << Liczba << " wynosi: " << wynik;
	return 0;
}

