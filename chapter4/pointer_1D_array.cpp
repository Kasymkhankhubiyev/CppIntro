# include <iostream>
using namespace std;


int main(){
    int array[3] = {100, 101, 102};

    int *ptr = array;

    std::cout << "Base element at " << ptr << " has value of " << array[0] << endl;
    std::cout << "Second element at " << ptr + 1 << " has value of " << array[1] << endl;
    std::cout << "Last element at " << ptr + 2 << " has value of " << array[2] << endl;

    return 0;
}