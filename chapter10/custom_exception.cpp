#include <iostream>
#include <exception>
#include <string.h>
using namespace std;

class MyException: public exception{
    public:
        string func1(){
            return "Entered an exception";
        }
};

int main(){
    try{
        throw MyException();
    }
    catch(MyException &except){
        std::cout << "Custom exception has been caught" << endl;
        std::cout << "Calling inner function:: " << except.func1() << endl;
    }
    catch(std::exception &oE){ //catch any other exceptions
    }

    return 0;
       
}