# include <iostream>
using namespace std;


class Person{
    public:
        virtual void display(){
            std::cout << "Enter your age: " << endl;
        }
};

class Student: public Person{
    public:
        void display(){
            std::cout << "Enter your graduation year: "<<endl;
        }
};

int main(){
    Person p;
    Student s;

    p.display();
    s.display();

    return 0;
}