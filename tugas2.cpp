#include <iostream>
using namespace std;

int main(){
    // Menggunakan Varible tambahan
    int a,b,c,x,y,i;
    a = 5;
    b = 10;
    cout << "Dengan variable tambahan \n";
    cout << "Sebelum di ubah" << endl;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl << endl;


    // Value tiap variable di tukar
    // dengan bantuan variable tambahan
    c = a;
    a = b;
    b = c;

    cout << "Setelah di ubah" << endl;
    cout << "A: " << a << endl;
    cout << "B: " << b <<"\n" <<endl;


    // Tanpa variable tambahan
    x = 10;
    y = 5;
    for (i = 0; i < 40; i++){
        cout << "=";

    }
    cout << "\n\nTanpa variable tambahan";
    cout << "\nSebelum di ubah" << endl;
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl << endl;


    // Value tiap variable di tukar
    // dengan bantuan operasi aritmatika
    x = x+y;
    y = x-y;
    x = x-y;

    cout << "Setelah di ubah" << endl;
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;


    return 0;
}


