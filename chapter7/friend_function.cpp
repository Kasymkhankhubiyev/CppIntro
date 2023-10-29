# include <iostream>
using namespace std;


class MyClass{
    friend int sum(int a, int b);
};

int sum(int a, int b){
    return a + b;
}

int main(){
    int a, b; 

    std::cout << "Enter to numbers to sum up: " << endl;
    std::cin >> a >> b;

    std::cout << "The sum is " << sum(a, b) << endl;

    return 0;
}