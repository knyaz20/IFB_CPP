#include <iostream>
#include <string>
using namespace std;

int main(){
    string a; // задаем пременной а строчное значение
    cout << "VVedite stroku: ";
    cin >> a;
    string b; // строка для записи перевернутого результата
    for (int i = a.length() - 1; i >= 0; i = i - 1){ // переворот строки
        b = b + a[i]; // запись символов в новую строку с конца
    }
    cout << "Resultat: " << b;
    return 0;
}
