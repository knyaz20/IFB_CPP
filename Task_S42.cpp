#include <iostream>
#include <algorithm> //���������� ��� sort
using namespace std;

void sort(int a[], int b){ // ������� ��� ����������
    sort(a, a + b, greater<int>());
}
int main() {
    int a[10];
    cout << "Vvedite 10 chisel: ";
    for (int c = 0; c < 10; c = c + 1){ // ���� � ���������� �������
        cin >> a[c];
    }
    sort(a, 10);
    for (int c = 0; c < 10; c = c + 1){ // ����� ���������������� �������
        cout << a[c] << " ";
    }
    return 0;
}
