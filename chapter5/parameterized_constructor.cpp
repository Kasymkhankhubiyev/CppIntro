# include <iostream>
using namespace std;


class Student{
    public:
        Student(string name, int age){
            std::cout << "This is a parameterized condtructor" << endl;
            std::cout << "That constracted a student with name " << name << 
                " at the age " << age << endl;
        }
};


int main(){
    Student student("Max", 21);

    return 0;
}