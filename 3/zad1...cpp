#include <iostream>
using namespace std;
int main(){
	int liczba;
	cout << "Podaj pierwsza liczbe:" ;
	cin >> liczba;
	
	double drugaliczba;
	cout << "Podaj druga liczbe";
	cin >> drugaliczba;
	
	char znak;
	cout << "Podaj znak dzialania (*,-,+,/):";
	cin >> znak;
	switch(znak) {
		case '*':
		float wynik=liczba*drugaliczba;
		break;
		
		case '+':
		float wynik=liczba+drugaliczba;
		break;
		
		case '-':
		float wynik=liczba-drugaliczba;
		break;
		
		case '/':
		float wynik=liczba/drugaliczba;
		break;
		
		default: 
		cout << "Nieprawidlowy znak"
		
		
	}  
    return 0;
}