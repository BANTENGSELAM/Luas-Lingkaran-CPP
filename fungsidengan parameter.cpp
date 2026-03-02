//library
#include <iostream>
using namespace std;
//deklarasi variable global
int panjang, lebar;
//implementasi fungsi dan prosedur
void input(){
    cout <<"Masukan Panjang :";
    cin >> panjang;
    cout <<"Masukan Lebar :";
    cin >> lebar;
}
int luaspersegi(){
    return panjang*lebar;
}
void output (){
    cout<< "Hasilnya :" << luaspersegi();
}
int main (){ // mulai
    input();
    output();
}// selesai