# include <iostream>
using namespace std;


class MyClass{
    public:
    int x=40, y;

    void sum(){
        std::cout << "\nSum is:  " << x+y;
    }
};


int main(){
    MyClass c1, c2;
    int y = 1;
    c1.y = 10;
    c2.y = 20;

    c1.sum();
    c2.sum();

    return 0;
}