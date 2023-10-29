# include <iostream>
using namespace std;


class PG{
    public:
        int age;
    void display1(){
        std::cout << "Enter your age: " << endl;
        std::cin >> age;
    }
};

class Student: public virtual PG{
    public: 
        string name;

        void display2(){
            std::cout << "Enter your name" << endl;
            std::cin >> name;
        }
};


class Exam: public virtual PG{
    public:
        int ecode;

        void display3(){
            std::cout << "Enter your ecode: " << endl;
            std::cin >> ecode;
        }
};

class Externals: public Student, public Exam{
    public:
        int marks;

        void display4(){
            std::cout << "Enter your level marks: " << endl;
            std::cin >> marks;
        }

        void check(){
            if ((age > 17) && (marks > 65)){
                std::cout << "\nAllowed for a new exam!" << endl;
            }else{
                std::cout << "\nTry once again later" << endl;
            }
        }
};


int main(){

    Externals external;
    std::cout << "Please, enter your valid information: " << endl;
    external.display1();
    external.display2();
    external.display3();
    external.display4();
    external.check();

    return 0;

    return 0;
}