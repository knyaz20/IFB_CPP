#include <iostream>
using namespace std;

double squared_sum(double a, double b){
    double c = a + b;
    return c*c;
}
int main() {
    double v,w;
    cout << "Write number 1: ";
    cin >> v;
    cout << "Write number 2: ";
    cin >> w;
    double d = squared_sum(v, w);
    cout << "Resultat: " << d;
    return 0;
}
