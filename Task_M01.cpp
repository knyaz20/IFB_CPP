#include <iostream>
#include <iomanip> //������� ��� ��������������
using namespace std;

int main() {
    setlocale (0, "Russian");
    int a = 10; //������ �������
    cout << "������� ��������:\n"; //��������� �������  � ��������� �� ����� ������
    cout << "\t"; //������ ������ � ����� ������ (����� ������� ����)
    for (int i = 1; i <= a; ++i){ //����� ����� ������� ������ ������� �� 1 �� 10 (�� ���������)
        cout << i << "\t";
    }
    cout << "\n";
    for (int i = 1; i <= a; ++i){ //����� ������ ������ (�� �����������)
        cout << i << "\t";
        for (int j = 1; j <= a; ++j){ //����� �������� ����� ������� ���������� ������ ������ �� ����� �������
            cout << j * i << "\t";
        }
        cout << "\n";
    }
    return 0;
}
