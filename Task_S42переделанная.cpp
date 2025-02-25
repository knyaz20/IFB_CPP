#include <iostream>
#include <algorithm> //библиотека для sort
using namespace std;

void sort(int a[], int b){ // функция для сортировки
    for (int c = 0; c < b - 1; c = c + 1){
        for (int d = 0; d < b - c - 1; d = d + 1){
            if (a[d] < a[d + 1]){
                int e = a[d];
                a[d] = a[d + 1];
                a[d + 1] = e;
            }
        }
    }
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
