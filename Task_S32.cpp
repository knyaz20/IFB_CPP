#include <iostream>
#include <cstring> // ��� ������ ����� ������
using namespace std;

int main() {
    int a = 10; // ������������ ����� ������
    char b[a];
    cout << "Vvedite stroku: ";
    cin.getline(b, a); // ��������� ������ ����������
    int d = strlen(b); //����� ������
    for (int c = 0; c < d; c = c + 1){
        b[c] = b[c] + 1; // ������������ ������� �� 1
    }
    cout << b;
    return 0;
}
