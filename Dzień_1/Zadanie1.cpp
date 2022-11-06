#include <iostream>

int main () {
    int a = 0;
    std::cout << "Podaj zmienna a: ";
    std::cin >> a;
    std::cout << "Reszta z dzielenia przez 3 = " << a % 3 << "\n";
    std::cout << "Wynik liczby podniesionej do kwadratu = " << a * a << "\n";
    std::cout << "Cyfra jedności liczby = " << a % 10 << "\n";
    std::cout << "Cyfra dziesiątek tej liczby = " << a / 10 << a % 10 << "\n";
}
