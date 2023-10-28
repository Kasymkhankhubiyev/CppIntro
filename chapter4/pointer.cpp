#include <iostream>
using namespace std;


int main(){
    int *pointer;
    int variable = 10;
    
    pointer = &variable;

    std::cout << "Varible value is " << variable << endl;
    std::cout << "Pointer to the value is " << pointer << endl;
    std::cout << "Pointer points to the value " << *pointer << endl;

    return 0;

}