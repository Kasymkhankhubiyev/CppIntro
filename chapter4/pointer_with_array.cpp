#include <iostream>
using namespace std;


int main(){
    int array[4];

    int *ptr, *pa;
    pa = array;
    ptr = &array[0];

    cout << "\nptr++ = " << ptr++ << endl;
    cout << "\npa++  = " << pa++ << endl;

    cout << "\nArray adresses with a help of pointers: " << endl;

    for (int i = 0; i < 4; i++){
        cout << "ptr + " << i << " = " << ptr + i << endl;
    }

    cout << "ptr++ " << ptr++ << endl;
    cout << "pa++ " << pa++ << endl;

    return 0;
}