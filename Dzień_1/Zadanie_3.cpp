#include <iostream>

int main () {
    int a = 0;
    std::cin >> a;
    int reszta = a % 2;
    if (a % 2 == 0) // jeżeli reszta z dzielenia przez dwa jest równa 0
    {
        std::cout << "Prarzysta\n";
    }
    else {
        std::cout << "Nieparzysta\n";
    }
}
