#include <iostream>
#include <math.h>
using namespace std;

int main() {
    setlocale (0, "Russian");
    long double side_A, number_of_sides, area;
    cout << "������� ������� �: " << "\n";
    cin >> side_A;
    cout << "������� ����� ������: " << "\n";
    cin >> number_of_sides;
    if(number_of_sides >= 3) {
        area =((number_of_sides * side_A * side_A) / 4) * (1 / tan(M_PI/number_of_sides));
        cout << "������� �����: " << area;
    }
    else {
        cout << "���-�� ������ ������ ���� ������ 2!";
    }

    return 0;
}
