#include <iostream>

int main () {
        int rok = 0;
        std::cin >> rok;
        if (rok % 4 == 0 && rok % 100 > 0 || rok % 400 == 0){
            std::cout << "Jest to rok przestępny\n";
        }
        else {
            std::cout << "Nie jest to rok przestępny\n";
        }
            
}
