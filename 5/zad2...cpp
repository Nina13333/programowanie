#include <iostream>
using namespace std;
int main() {
	int N;
	cout << "Podaj liczbe N: ";
	cin >> N;
	for (int i = N * N; i <= N; i++) {
		cout << "Kwadraty liczb od 1 do N: " << i << endl;
	}

	
	return 0;
}