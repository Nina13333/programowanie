#include <iostream>
using namespace std;
int main (){
	int wiek;
	string imie;
	
	cout << "Podaj swoje imie: " <<  endl;
	cin >> imie;
	cout << "Podaj swoj wiek: " << endl;
	cin >> wiek;
	cout << "Witaj, " << imie << "! Masz " << wiek << " lat." << endl ;
	
	return 0;
}