#include <iostream>
#include <cstring> // для находа длины строки
using namespace std;

int main() {
    int a = 10; // максимальная длина строки
    char b[a];
    cout << "Vvedite stroku: ";
    cin.getline(b, a); // считываем строку указателем
    int d = strlen(b); //длина строки
    for (int c = 0; c < d; c = c + 1){
        b[c] = b[c] + 1; // увеличивание символа на 1
    }
    cout << b;
    return 0;
}
