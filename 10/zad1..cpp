#include <iostream>
using namespace std;

void ZmienWartosc(int *wskaznik) {
	*wskaznik = *wskaznik * 3;

}

void WartoscZmien(int *wskaznik) {
	*wskaznik = *wskaznik * 2;
}
	
int main() {
	int liczba = 5; 
	cout << "Przed modyfikacja: " << endl;
	cout << "a = " << liczba << endl;
	
	int liczba2 = 10;
	cout << "b = " << liczba2 << endl;
	
	ZmienWartosc(&liczba);
	cout << "Po modyfikacji: " << endl;
	cout << "a = " << liczba << endl;
	
	WartoscZmien(&liczba2);
	cout << "b = " << liczba2 << endl;
	
	return 0;
}

