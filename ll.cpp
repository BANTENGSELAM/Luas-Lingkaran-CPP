#include <iostream>
using namespace std;

// deklarasi secara global
int r;

//fungsi dan prosedur untuk program
void input (){
    cout << "Masukan Jari-Jari Lingkaran : ";
    cin >> r;
}
// float untuk operasi
float luaslingkaran (int r){
    return r*r*3.14159;
}

void output(){
    cout << "Hasilnya : " <<luaslingkaran(r) << endl;
}

int main (){
    input ();
    output ();
}