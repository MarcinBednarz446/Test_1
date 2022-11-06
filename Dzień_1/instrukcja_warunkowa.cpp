#include <iostream>

int main () {
    //bool - prawda/fałsz
    bool prawda = true;
    bool falsz = false;
    
    //operatory logiczne
    int a = 3;
    int b = 5;
    std::cout << a << " < " << b << " = " << (a < b) << "\n";
    std::cout << a << " <= " << b << " = " << (a <= b) << "\n";
    std::cout << a << " > " << b << " = " << (a > b) << "\n";
    std::cout << a << " => " << b << " = " << (a => b) << "\n";
    std::cout << a << " == " << b << " = " << (a == b) << "\n";
    std::cout << a << " != " << b << " = " << (a != b) << "\n";
 
    // if (warunek) {
  //to jesli warunek jest true wykona się polecenie  
//}
    // else wykona sie jesli warunek jest falszywy
    if (true) {
        std::cout << "Zawsze\n";
    }
    if (false) {
        std::cout << "Nigdy\n";
    }
    if (a < b) {
        std::cout << "a jest mniejsze od b\n";
    }
    else {
        std::cout << "a NIE jest mniejsze od b\n";
    }
}
