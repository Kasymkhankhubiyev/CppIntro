# include <iostream>
using namespace std;


class Student{
    public:

        Student(string name, int age){
            std::cout << "\nName is " << name << " and age is " << age << endl;
        }
        
        // creating a copy constructor 
        Student(const Student &student){
            std::cout << "\nThis is a copy constructor" << endl;
        }
};

int main(){
    Student s1("Max", 21);
    Student s2(s1);

    return 0;
}