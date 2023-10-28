# include <iostream>
using namespace std;


int main(){

    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout << "The size of an array is: " << sizeof(arr) << "bytes" << endl;
    std::cout << "The size of a single element of the array is: " << sizeof(arr[0]) << "bytes" << endl;
    std::cout << "Finally the array size is: " << sizeof(arr) / sizeof(arr[0]) << "elements" << endl;

    return 0;
}