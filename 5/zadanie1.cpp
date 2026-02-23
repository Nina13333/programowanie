#include <iostream>
using namespace std;
int main(){
	int N;
	cout << "Podaj liczbe N: ";
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cout << "Suma liczb od 1 do 5 wynosi: " << (i += N);
	}
	cout << endl;

	
	return 0;
}
