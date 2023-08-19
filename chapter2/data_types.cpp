#include <iostream>
using namespace std;

int main(){
    int x = 98;
    short int sh = 1;
    long int l = 34566;

    signed int s = -9998;
    unsigned int u = 66;

    char c = 'A';
    // char char_ru = 'А';
    
    float f = 1.987;
    double d = 9.923456783;

    bool b = true;

    //print out data types sizes

    cout << "Size of int : " << sizeof(x) << " bytes" << endl;
    cout << "Size of short int : " << sizeof(sh) << " bytes" << endl;
    cout << "Size of long int : " << sizeof(l) << " bytes" << endl;
    cout << "Size of signed int : " << sizeof(s) << " bytes" << endl;
    cout << "Size of unsigned int : " << sizeof(u) << " bytes" << endl;
    cout << "Size of char : " << sizeof(c) << " bytes" << endl;
    // cout << "Size of char russian : " << sizeof(char_ru) << " bytes" << endl;
    // cout << "new line" << endl;
    cout << "Size of float : " << sizeof(f) << " bytes" << endl;
    cout << "Size of double : " << sizeof(d) << " bytes" << endl;
    cout << "Size of bool : " << sizeof(b) << " bytes" << endl;

    return 0;
}