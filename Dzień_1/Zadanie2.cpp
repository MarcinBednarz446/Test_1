#include <iostream>

// Przyjmij 3 liczby gdzie:
//a i b oznaczają godziną i minutę obecną
//wypisz godzinę i minute jaka bedzie wyświetlona na zegarze po c minut

int main () {
        int a = 0;
        int b = 0;
        int c = 0;
        std::cin >> a >> b >> c;
        std::cout << "Godzina obecna " << a << ":" << b << "\n";
        
        int suma_minut = b + c;
        int nowe_minuty = suma_minut % 60;
        int nowe_godziny = a + suma_minut / 60;
        nowe_godziny = nowe_godziny % 24;
        
        std::cout <<"Po upłynięciu " << c << "minut będzie godzina " << nowe_godziny << ":" << nowe_minuty << "\n";
}
