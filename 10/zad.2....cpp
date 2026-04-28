#include <iostream>
using namespace std;

void FindMinMax(float* min, float* max, int rozmiar, float* tablica) {
	
	*max = tablica[0];
	*min = tablica[0];
	
	for (int i = 1; i < rozmiar; i++) {
		if (tablica[i] > *max) ;
		if (tablica[i] < *min);	
	}
}

int main() {
	
	float liczby[10] = {1.5, -3.2, 4.8, 7.0, -1.1, 0.0, 3.3, -6.6, 8.9, 2.2};
	float max, min;
	cout << "Tablica: " << liczby[10];
	
	FindMinMax(liczby, 10, max, min);
	
	cout << "Najwieksza liczba: " <<max << endl;
	cout <<"Najmniejsza liczba:  " << min << endl;
	
	
	return 0;
}