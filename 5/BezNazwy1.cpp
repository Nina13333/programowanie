#include <iostream>
using namespace std;
int main () {
	
int N;
cout << "Podaj liczbe N: ";
cin >> N;
cout << "Suma liczb od 1 do i wynosi: " << endl;
for (int i=1; i <= N; i++){

cout << i+N << endl;
}
for (int j=1; j<= N; j++){
	
	cout << j+N << endl;

}
return 0;	
}