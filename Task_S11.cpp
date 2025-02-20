#include <iostream>
using namespace std;

int main() {
    int a;
    for (a = 0; a <= 100; a = a + 1)
        if (a % 3 == 0)
            cout << a << "  ";
    return 0;
}
