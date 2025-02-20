#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream in;
    in.open("output.txt");
    int a, b;
    b = 1;
    while (in >> a) {
        cout << b << ". " << a << "\n";
        b = b + 1;
    }
    in.close();
    return 0;
}
