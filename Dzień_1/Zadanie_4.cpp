#include <iostream>

int main () {
    int x;
    std::cin >> x;
    if (x > 0) {
        std::cout <<"Jest większe od 0\n";
    }
    if ( x < 0) {
        std::cout <<"Jest mniejsze od 0\n";
    }
    else {
        std::cout <<"Jest równe 0\n";
    }
}
