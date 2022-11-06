//przyjmij liczbe i wypisz sume jej cyfr

#include <iostream>

int main () {
        int x = 0;
        std::cin >> x;
        int suma = 0;
        while (x > 0){
        suma += x % 10; // dodajemy ostatnią cyfrę liczby do sumy
        x /= 10; // usuwamy ostatnią cyfrę liczby
        }
        std::cout << "Suma cyfr: " << suma << "\n";
}
