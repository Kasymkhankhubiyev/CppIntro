# include <iostream>
using namespace std;

void swap(int *x, int *y){
    int *ptr;
    ptr = x;
    x = y;
    y = ptr;
}


int main(){
    int a, b;
    int *num1, *num2;

    std::cout << "Enter the first number: \n";
    std::cin >> a;
    std::cout << "Enter the second number: \n";
    std::cin >> b;

    num1 = &a;
    num2 = &b;

    // swap(num1, num2);
    swap(a, b);

    std::cout << "After swapping we got: \n";
    std::cout << "The first number is " << a << endl;
    std::cout << "The second number is " << b << endl;

    return 0;
}