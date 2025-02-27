#include <iostream>
#include <cmath> // ѕодключаем математическую библиотеку
using namespace std;

int main(){
    int N;
    double A, c, S;
    cout << "VVedite chislo storon n: ";
    cin >> N;
    cout << "VVedite storonu a: ";
    cin >> A;
    c = 1 / tan(3.14 / N); // считаем катангес дл€ общей формулы (180 градусов в радианах)
    S = ((N*(A*A)) / 4 * c); // формула дл€ подсчЄта площади
    cout << "Ploshad: " << S;
    return 0;
}
