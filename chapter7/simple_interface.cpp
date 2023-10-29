#include <iostream>
using namespace std;


class Interface{
    public:
        virtual void say_hello(){};

        void method(){
            std::cout << "This is an interface method" << endl;
        }
};

class SubClass: public Interface{
    public: 
        void say_hello(){
            std::cout << "Hello, frome overrided method!" << endl; 
        }
};


int main(){

    SubClass c;

    c.method();
    c.say_hello();

    return 0;
}