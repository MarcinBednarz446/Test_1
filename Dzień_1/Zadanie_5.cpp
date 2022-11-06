// przyjmij lczbę czy najduje sie w przedziale 10:20
#include <iostream>

int main () {
    int x = 0;
    std::cin >> x;
    if (x > 9 && x < 20){
        std::cout << "W przedziale\n";
        }
    else {
        std::cout << "Nie znajduje się w przedziale\n";
    }
}
