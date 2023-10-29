# include <iostream>
# include <string.h>
using namespace std;

union MyUnion{
    int x;
    char name;
};

int main(){
    MyUnion myunion;
    myunion.name = 'M';
    myunion.x = 17;

    std::cout << "x = " << myunion.x << endl;
    std::cout << "name is " << myunion.name << endl;
    std::cout << "Union size is " << sizeof(myunion) << endl;
    std::cout << "size of x is " << sizeof(myunion.x) << endl;
    std::cout << "size of name is " << sizeof(myunion.name) << endl;

    return 0; 
}