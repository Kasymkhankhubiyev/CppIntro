#include <iostream>
using namespace std;


class Parent{
    public:
        int p=60;

        void showP(){
            std::cout << "My age is " << p << ". " << p_tall << " cm tall and has " << 
                p_eye_color << " eyes." << endl;
        }

    protected:
        int p_tall = 190;

    private:
        string p_eye_color = "blue";
};

class Child: public Parent{
    public:
        int c = 42;

        void showC(){
            std::cout << "My age is " << c << ". " << c_tall << " cm tall and has " << 
                c_eye_color << " eyes." << endl;
        }

        void show_parent(){
            std::cout << "My parent is " << p << " years old, he is " << p_tall << " cm tall"<<endl;
        }

    protected:
        int c_tall = 187;

    private:
        string c_eye_color = "green";

};

class GrandChild: public Child{
    public:
        int g = 20;

        void showG(){
            std::cout << "My age is " << g << ". " << g_tall << " cm tall and has " << 
                g_eye_color << " eyes." << endl;
        }

        void show_parent(){
            std::cout << "My parent is " << c << " years old, he is " << c_tall << " cm tall" << endl;
        }

        void show_grandparent(){
            std::cout << "My Grandparent is " << p << " years old, he is " << p_tall << " cm tall"<<endl;
        }

    protected:
        int g_tall = 191;

    private: 
        string g_eye_color = "blue";

};

int main(){

    Parent parent;
    Child child;
    GrandChild grandchild;

    std::cout << "\nThis is a base class: "<< endl;
    parent.showP();

    std::cout << "\nThis is a subclass of base class:" << endl;
    child.showC();
    child.show_parent();

    std::cout << "\nThis is a subclass of a subclass of the base class:" << endl;
    grandchild.showG();
    grandchild.show_parent();
    grandchild.show_grandparent();

    return 0;
}