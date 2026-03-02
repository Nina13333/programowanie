#include <iostream>
using namespace std;
int main ()
{
	char tekst[21];
	cout << "Podaj ciag znakow (max 20 znakow): ";

	cin.getline(tekst, 21);
	for (int i = 0; i < 5; i++) {
		if (!(tekst == "a")){
			tekst == "o";
		}else{
		cout << 'o' << endl;
	}

	}
	cout << "\nZmodyfikowany ciag znakow: " << tekst;
	
	return 0;
}