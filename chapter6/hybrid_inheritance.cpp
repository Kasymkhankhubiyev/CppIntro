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

class student: public PG{
    public: 
        string name;

        void display2(){
            std::cout << "Enter your name: " << endl;
            std::cin >> name;
        }
};

class exam{
    public:
        int ecode;

        void display3(){
            std::cout << "Enter your ecose: " << endl;
            std::cin >> ecode;
        }
};


class external: public exam, public student{
    public:
        int marks;

        void display4(){
            std::cout << "Enter your exam marks: " << endl;
            std::cin >> marks;
        }

        void check(){
            if ((age > 17) && (marks > 60)){
                std::cout << "You passed externals!";
            }else{
                std::cout << "Try once again later";
            }
        }
};


int main(){
    external e;
    e.display1();
    e.display2();
    e.display3();
    e.display4();
    e.check();

    return 0;
}