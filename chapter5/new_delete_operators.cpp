# include <iostream>
using namespace std;


int main(){

    // create a pointer pointing to NULL
    int *ptr = nullptr;

    // allocates memory for an int and 
    // returns a pointer to the memory location
    ptr = new int;

    // assign a value
    *ptr  = 10;

    std::cout << "\nThe value of a pointer is " << *ptr << endl;

    // deallocate memmory 
    delete ptr;

    return 0;
}