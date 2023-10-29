# include <iostream>
using namespace std;


class Student{
    public:
        string name;
        int age, group;

        Student(){
            name = "Unknown";
            age = 0;
            group = 0;
        }

        Student(string name, int age, int group){
            this->name = name;
            this->age = age;
            this->group = group;
        }

        void display(){
            std::cout << "Name = " << name << "\tage = " << age << "\tgroup = " << group << endl;
        }
};

struct StudentStruct{
    string name;
    int age;
};


int main(){
    Student student_class("Max", 21, 18345);
    StudentStruct student_struct = {"Mike", 22};
    // student_class.display();

    std::cout << "The student name is " << student_class.name << endl;
    std::cout << "The student name is " << student_struct.name << endl;

    return 0;
}