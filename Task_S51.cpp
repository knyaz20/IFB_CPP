#include <iostream>
#include <string>
using namespace std;

int main(){
    string a; // ������ ��������� � �������� ��������
    cout << "VVedite stroku: ";
    cin >> a;
    string b; // ������ ��� ������ ������������� ����������
    for (int i = a.length() - 1; i >= 0; i = i - 1){ // ��������� ������
        b = b + a[i]; // ������ �������� � ����� ������ � �����
    }
    cout << "Resultat: " << b;
    return 0;
}
