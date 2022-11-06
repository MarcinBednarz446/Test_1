//pobierz 3 liczby i wyświetl największą
#include <iostream>

int main () {
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a >> b >> c;
    
    int max = a;
    
    if (b > max)
        max = b;
    
    if (c > max)
        max = c;
    std::cout << max << "\n";
    
//     if (a > b) {
//         if (a > c) {
//             std::cout << a;
//         }
//         else {
//             std::cout << c;
//         }
//     }
//     else {
//         if (b > c) {
//             std::cout << b;
//         }
//         else {
//             std::cout << c;
//         }
//     }
//     std::cout <<"\n";
}
