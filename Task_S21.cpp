#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int a, b, c, d;
    std::cout << "Write number 1: ";
    std::cin >> a;
    std::cout << "Write number 2 (2>1): ";
    std::cin >> b;
    if (b <= a){
        cout << "Oshibka";
        return 1;
    }
    ofstream out;
    out.open("output.txt");
    for (d = a; d <= b; d = d + 1) {
            c = d * 3;
            out << c << " ";
    }
    out.close();
    cout << "Resultat sapisan";
    return 0;
}
