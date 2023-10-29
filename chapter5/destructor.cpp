# include <iostream>
using namespace std;


class Student{
    public:
        Student(){
            std::cout << "\nThis is a default constructor";
        }

        Student(string name, int age){
            std::cout << "\nThis is a parameterized contructor" << endl;
            std::cout << "Student name is " << name << " and age is " << age; 
        }

        Student(const Student &student){
            std::cout << "\nThis is a copy constructor" << endl;
        }

        ~Student(){
            std::cout << "This is a destructor for all" << endl;
        }
};


int main(){
    Student s1;
    Student s2("Max", 21);
    Student s3(s2);

    return 0;
}