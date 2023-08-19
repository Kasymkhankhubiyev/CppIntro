# include <iostream>
using namespace std;

void make_calculus(int a, int b){
    cout << a << " + " << b << " = " << a + b << endl; 
    cout << a << " - " << b << " = " << a - b << endl; 
    cout << a << " * " << b << " = " << a * b << endl; 
    cout << a << " / " << b << " = " << a / b << endl; 
}

int main(){
     int a, b;

    cout << "Enter first number" << endl;
    cin >> a;
    cout << "Enter second number" << endl;
    cin >> b;

    make_calculus(a, b);

    return 0;
}