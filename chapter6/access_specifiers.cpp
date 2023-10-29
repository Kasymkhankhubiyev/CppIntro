#include <iostream>
using namespace std;


class Parent{
    public: 
        int p1 = 60;

        void showP(){
            std::cout << "Public value is " << p1 << endl;
            std::cout << "Protected value is " << p2 << endl;
            std:: cout << "Private value is " << p3 << endl;
        }

    protected:
        int p2 = 12;

    private:
        int p3 = 16;
};

class Child: public Parent{
    public:
        int c1 = 20;

        void showC(){
            std::cout << "Public value is " << c1 << endl;
            std::cout << "Protected value is " << c2 << endl;
            std::cout << "Private value is " << c3 << endl;
        }

    protected: 
        int c2 = 17;

    private:
        int c3 = 23;
};

int main(){

    Parent parent;
    Child child;

    std::cout << "\nNow check parent values via Parent: \n";
    parent.showP();

    std::cout << "\nNow check child values via Child: \n";
    child.showC();

    std::cout << "\nNow we try to access parent values via Child: \n";
    child.showP();


    std::cout << "\nNow try to change parent values via Child class: \n";
    child.p1 = child.p1 + 1; // accessable
    // child.p2 = child.p2 + 1; // forbiden
    // child.p3 = child.p3 + 1; // forbiden
    child.showP();


    return 0;
}