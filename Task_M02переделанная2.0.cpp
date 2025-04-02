#include <iostream>
#include <math.h>
using namespace std;

double calculatePolygonArea(double a, int b){
    setlocale (0, "Russian");
    if (b < 3){
        cerr << "Ошибка многоугольник должен иметь минимум 3 стороны";
        return 1;
    }
    double c = (b * a * a) / (4 * tan(M_PI / b));
    return c;
}
int main(){
    setlocale (0, "Russian");
    double A;
    int N;
    cout << "Введите сторону А: ";
    cin >> A;
    cout << "Введите число сторон: ";
    cin >> N;
    double c = calculatePolygonArea(A, N);
    if (c > 0){
    cout << "Площадь равна: " << c << endl;
    }
    return 0;
}
