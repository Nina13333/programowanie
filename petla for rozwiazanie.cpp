#include <iostream>
using namespace std;
int main () {
	int N, X;
	cout << "Ile liczb chcesz wprowadzic: ";
	cin >> N;
	cout << "Podaj liczby: " << endl;

	
	for (int i=0; i <= N; i++){
		cin >> X;
		suma += X;
	}
	
	cout << "Srednia podanych liczb wynosi: " << (X+N)/N << endl;
	
	
return 0;
}
