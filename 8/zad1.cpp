#include <iostream>
using namespace std;

bool Parzystosc(int liczba) {
	if(liczba % 2 == 0){
		return true;
	}
	else {
		return false;
	}

}
int main () {
	int wynik1;
	
	cout << "Podaj liczbe calkowita: ";
	cin >> wynik1;
	
	
	 
	cout << "Liczba " << wynik1 << " jest ";        		                           

	                                               
	if(Parzystosc(wynik1)) {
		cout << "Parzysta\n" << wynik1;
	
	}else{
	 cout << "Nieparzysta\n" << wynik1;
}
	 
	
	return 0;
}