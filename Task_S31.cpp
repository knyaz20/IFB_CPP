#include <iostream>
#include <string>
using namespace std;

int main(){
    string c[10] = {"nol","odin","dva","tri","chetiri","pyat","shesti","semi","vosemi","devyat"};
    int a;
    cout << "Write number ot 0 do 9: ";
    cin >> a;
    if (a >= 0 && a <= 9) {
        cout << "Nasvanie chisla: " << c[a];
    } else {
        cout << "Oshibka";
    }
    return 0;
}
