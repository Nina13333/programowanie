#include <iostream>
using namespace std;
int main(){
   int number = 2;
   
   do {
   	cout << "Podaj liczbe N :" ;
   	cin >> number >> 'N';
   	number += 2;
   	
   cout << "Liczby parzyste od 2 do N";
   cin >> number;

   } while (number = 'N');
   
    return 0;
	}