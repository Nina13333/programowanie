#include <iostream>
using namespace std;
int main(){
int N;
cout << "Podaj liczbe N: ";
cin >> N;
for(int i = 1; i < N; i++) {
	cout << i << "* "<< N << " = " << N*i << "\n";
}
	for(int j = 1; j < N; j++){	
	cout << j << "* "<< N << " = " << N*j << "\n";
}
   return 0;  
}