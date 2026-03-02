#include <iostream>
using namespace std;

// deklarasi
float a = 3.14159;
int r;

//fungsi dan prosedur
void input (){
    cout << "Masukan Jari-Jari Lingkaran : ";
    cin >> r;
}

float luaslingkaran (float a, int r){
    return a*r*r;
}

void output(){
    cout << "Hasilnya : " <<luaslingkaran(a,r) << endl;
}

int main (){
    input ();
    output ();
}