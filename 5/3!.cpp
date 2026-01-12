#include <iostream>
using namespace std;
int main (){
	int N;
	cout << "Podaj liczbe N: ";
	cin >> N;
	for (int i = 1; i <= N; i+=2) {
		cout << i;
		cout << endl;
	}
	
	return 0;
}