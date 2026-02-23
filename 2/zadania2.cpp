#include <iostream>
using namespace std;
int main(){
	int liczba;
	cout << "Podaj wage";
	cin >> liczba;
	// Operator OR (||)
	if (liczba <=18.5) {
		cout << "Niedowaga";
	
	}else if ((liczba >=18.5) || (liczba <=24.9)) {
		cout << "W normie";	
		
	
	}
    return 0;
}