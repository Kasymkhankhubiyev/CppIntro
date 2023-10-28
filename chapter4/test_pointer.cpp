# include <iostream>
using namespace std;


int main(){
    int val1, val2;
    int *ptr1, *ptr2, *ptr3;

    ptr1 = &val1; //gets a pointer to val1 containing nothing
    *ptr1 = 10; //puts a value 10 into the adress of val1 --> val1 = 10
    ptr1 = &val2; //get pointer to val2
    *ptr1 = 20; //puts a value 20 into the adress of val2 --> val2 = 20
    // ptr3 = 50; //puts value 50 into pointer -- error
    // ptr2 = nullptr;
    ptr3 = NULL;

    std::cout << "\nValue at first variable is " << val1 << endl;
    std::cout << "Value at the second variable is " << val2 << endl;
    std::cout << "The first pointer points to " << ptr1 << endl;
    std::cout << "The second pointer points to " << ptr2 << endl; // -- error
    std::cout << "The third pointer points to " << ptr3 << endl; // -- error 

    return 0;

}