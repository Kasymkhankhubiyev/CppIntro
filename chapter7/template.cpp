# include <iostream>
using namespace std;

/*
    Template is needed to make generic function for different
    data types at once
*/
template <class T, class T1>
void swap(T &a, T1 &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    int x;
    float y;

    std::cout << "Enter to values to swap: ";
    std::cin >> x >> y;
    std::cout << "Before swaping x = " << x << ",\ty = " << y << endl;
    swap(x, y);
    std::cout << "After swaping x = " << x << ",\ty = " << y << endl;

    return 0;
}