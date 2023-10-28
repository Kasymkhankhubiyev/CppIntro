# include <iostream>
using namespace std;


void func_A(int *x, int* y){
    *x = *x + 10;
    *y = *y + *x;
}


int main(){
    int a, b;
    int *num1, *num2;

    num1 = &a;
    num2 = &b;

    std::cout << "Enter the first number: \n";
    std::cin >> a;
    std::cout << "Enter the second number: \n";
    std::cin >> b;

    func_A(num1, num2);

    std::cout << "The first number is " << a << endl;
    std::cout << "The second number is " << b << endl;

    return 0;
}