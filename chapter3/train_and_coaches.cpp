# include <iostream>
using namespace std;


int main(){

    int train[3] = {10, 11};
    train[2] = 12;

    std::cout << "Train elements are: \n";
    std::cout << "Element1 is " << train[0] << endl;
    std::cout << "Element2 is " << train[1] << endl;
    std::cout << "Eleemnt3 is " << train[2] << endl;

    return 0;
}