# include <iostream>
using namespace std;


class Person{
    public:
        int age;

        void display1(){
            std::cout << "Enter your age: ";
            std::cin >> age;
        }

};

class Student: public Person{
    public:
        int graduation_year;

        void display2(){
            std::cout << "Enter you graduation year: ";
            std::cin >> graduation_year;
        }
};

class exam: public Student{
    public:
        void check(){
            if ((age > 18) && (graduation_year == 2021 || graduation_year == 2022)){
                std::cout << "You can apply for an admission test." << endl;
            }else{
                std::cout << "Sorry, you cannot apply for an admission test." << endl;
            }
        }
};

int main(){

    exam e;
    e.display1();
    e.display2();
    e.check();
    
    return 0;
}