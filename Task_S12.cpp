#include <iostream>
using namespace std;

int main() {
    int a, sum;
    a = 1;
    sum = 0;
    while (a <= 1000){
        if (a % 7 == 0){
            sum = sum + a;
        }
        a = a + 4;
    }
    cout << "Summa chisel: " <<sum;
    return 0;
}
