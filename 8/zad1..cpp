#include <iostream>
using namespace std;

int Podziel(int wynik1) {
	int dzialanie = wynik1 / 4;
	return dzialanie;

}
int main () {
	int wynik1;
	
	cout << "Podaj liczbe calkowita: ";
	cin >> wynik1;
	
	float dzialanie = Podziel(wynik1 / 4);
	                                   
	cout << "Liczba " << wynik1 << " jest " << dzialanie ;
	
	return 0;
}