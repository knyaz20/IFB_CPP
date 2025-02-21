#include <iostream>
#include <algorithm> //библиотека для sort
using namespace std;

void sort(int a[], int b){ // функция для сортировки
    sort(a, a + b, greater<int>());
}
int main() {
    int a[10];
    cout << "Vvedite 10 chisel: ";
    for (int c = 0; c < 10; c = c + 1){ // ввод и заполнение массива
        cin >> a[c];
    }
    sort(a, 10);
    for (int c = 0; c < 10; c = c + 1){ // вывод отсортированного массива
        cout << a[c] << " ";
    }
    return 0;
}
