#include <iostream>
using namespace std;


int main(){
    // Tugas 2.
    // Menukarkan dua variable dengan bantuan variable sementara
    int a = 10, b = 12, c, x, y;

    c = a; // Variable c diisi dengan variable a yang bernilai 10
    a = b; // Variable a diisi dengan variable b yang bernilai 12
    b = c; // Variable b diisi dengan variable c yang bernilai 10

    cout << "Menukarkan Variable dengan variable sementara\n";
    cout << "A: " << a << endl << "B: " << b << endl << endl;




    // Menukarkan dua variable tanpa variable sementara
    x = 3;
    y = 5;

    x = x+y; //8
    y = x-y; //3
    x = x-y; //5

    cout << "Menukarkan dua varible tanpa variable sementara\n";
    cout << "X: " << x << endl << "Y: " << y << endl;
    return 0;
}
