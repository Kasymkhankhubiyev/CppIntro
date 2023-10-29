#include <iostream>
using namespace std;


class Driver{
    public:
        Driver(){
            std::cout << "This is the simples constructor" << endl;
        }
};


int main(){
    Driver driver;
    return 0;
}