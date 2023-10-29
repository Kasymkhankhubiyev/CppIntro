# include <iostream>
using namespace std;


class Parent{
    public:
        int p_age = 50;

        void show_p_data(){
            std::cout << "The parent age is " << p_age << ". Has " << children_num <<
                " children, and a salary " << salary << endl;
        }

        void child_accessed_public(){
            std::cout <<"\nChild can access public data\n";
        }

    protected: 
        int children_num = 2;

        void child_accessed_protected(){
            std::cout << "\nChild can access protected data\n";
        }

    private:
        int salary = 34000;

        void child_accessed_protected(){
            std::cout << "\nChild can access protected data\n";
        }
};


class PublicChild: public Parent{
    public:
        int age = 21;

        void show_data(){
            std::cout << "The children age is " << age << ". Got education at " << 
                education << " and is " << marriage << endl;
        }

        // int pro(){
        //     // return salary;
        // }

    protected:
        string education = "MIT";

    private:
        string marriage = "not married";

};


class ProtectedChild: protected Parent{
    public:
        int age = 25;

        void show_data(){
            std::cout << "The children age is " << age << ". Got education at " << 
                education << " and is " << marriage << endl;
        }

    protected:
        string education = "Harvard";

    private:
        string marriage = "married";
};


class PrivateChild: private Parent{
    public:
        int age = 27;

        void show_data(){
            std::cout << "The children age is " << age << ". Got education at " << 
                education << " and is " << marriage << endl;
        }

    protected:
        string education = "Standford";

    private:
        string marriage = "married and has a child";
};


int main(){

    Parent parent;
    PublicChild child1;
    ProtectedChild child2;
    PrivateChild child3;

    parent.show_p_data();

    std::cout << "\nThis Child is created with a public access" << endl;
    child1.show_data();
    child1.child_accessed_public();
    // std::cout << child1.p_age << endl;

    std::cout << "\nThis child is created withh a protected access" << endl;
    child2.show_data();
    // child2.p_age();

    child3.show_data();
    // child3.child_accessed_private();

    return 0;
}