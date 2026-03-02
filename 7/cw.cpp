#include <iostream>
#include <string>

int main() {
    char tekst[21];

    std::cout << "Podaj ciag znakow (max 20): ";

    std::cin.get(tekst, 21);

    for (int i = 0; tekst[i] != '\0'; i++) {
        
        if (tekst[i] == 'a') {
            tekst[i] = 'o';
        }
    }

	cout << "Zmodyfikowany ciag: " << tekst << endl;

    return 0;
}
