#include <iostream>
using namespace std;
int main () {
	int tablica[5];
	int suma = 0;	
	for (int i=0; i<5; i++) {
		cout << "Podaj liczbe nr " << i+1 << ": ";
		cin >> tablica[i];
	}
	for (int i = 0; i < 5; i++) {
		suma += tablica[i];
		 
	}
	
	cout << "\nSrednia liczb:  " << suma << endl;
	return 0;
}