#include <iostream>
#include <cmath> // ���������� �������������� ����������
using namespace std;

int main(){
    int N;
    double A, c, S;
    cout << "VVedite chislo storon n: ";
    cin >> N;
    cout << "VVedite storonu a: ";
    cin >> A;
    c = 1 / tan(3.14 / N); // ������� �������� ��� ����� ������� (180 �������� � ��������)
    S = ((N*(A*A)) / 4 * c); // ������� ��� �������� �������
    cout << "Ploshad: " << S;
    return 0;
}
