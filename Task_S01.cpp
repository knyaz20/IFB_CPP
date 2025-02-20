#include <iostream>

int main() {
    int a;
    std::cout << "Celoe chislo: ";
    std::cin >> a;
    float b, d, f, k;
    std::cout << "Ne celoe chislo: ";
    std::cin >> b;
    char p, c;
    std::cout << "Tekstovoi simvol: ";
    std::cin >> p;
    bool h = true;

    c = a + p;
    k = b - h;
    d = a * b;
    f = a / b;
    std::cout << c << "\n";
    std::cout << k << "\n";
    std::cout << d << "\n";
    std::cout << f << "\n";
    return 0;
}
