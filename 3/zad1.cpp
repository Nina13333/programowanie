#include <iostream>
using namespace std;
int main(){
	int liczba;
	cout << "Podaj pierwsza liczbe:" ;
	cin >> liczba;
	
	double 2liczba;
	cout << "Podaj druga liczbe";
	cin >> 2liczba;
	
	char znak;
	cout << "Podaj znak dzialania (*,-,+,/):";
	cin >> znak;
	switch(znak) {
		case *;
		float wynik=liczba*2liczba;
		break;
		
		case +;
		int znak=liczba+2liczba;
		break;
		
		case -;
		int znak=liczba-2liczba;
		break;
		
		case /;
		int znak=liczba/2liczba;
		break;
		
		default: 
		cout << "Nieprawidlowy znak"
		
		
	}  
    return 0;
}