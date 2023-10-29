#include <iostream>
using namespace std;


class Parent{
    public:
        int parent_age = 60;

        void show_parent_age(){
            std::cout << "The parent age is " << parent_age << endl;
        }

};

class Child : public Parent {
    public:
        int child_age = 20;

        void show_child_age(){
            std::cout << "The child age is " << child_age << endl;
        }
};

int main(){

    Child c1;

    c1.show_parent_age();
    c1.show_child_age();

    return 0;
}