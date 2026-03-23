#include <iostream>
using namespace std;


int main () {
	int wynik1;
	
	cout << "Podaj liczbe calkowita: ";
	cin >> wynik1;
	
	cout << "Liczba " << wynik1 << " jest ";        
	if(wynik1 / 2) cout << "Parzysta\n";
	else cout << "Nieparzysta\n";		                           

	
	return 0;
}