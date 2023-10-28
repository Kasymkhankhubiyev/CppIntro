# include <iostream>
using namespace std;

enum drivers {checo, max, gasly, lewis, yuki=9, carlos};

int main(){

    drivers d1, d2; //two instances of drivers

    d1 = carlos;
    d2 = gasly;

    // return the index of occurance in drivers array
    std::cout << "\nFirst driver is " << d1 << endl;
    std::cout << "Second driver is " << d2 << endl;

    return 0;
}