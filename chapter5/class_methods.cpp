# include <iostream>
using namespace std;


class MyClass{
    public: 
        static int num1;
        int y = 100, r;

        void sum(int x, int y){
            std::cout << "\nThe sum " << x << " + " << y << " = " << x + y << endl;
        }

        static int assign(int x){
            std::cout << "\nAssigned a value to integer = " << x << endl;
            num1 = x;

            return 0;
        }

        void avg(){
            r = (num1 + y) / 2 ;
            std::cout << "\nThe average of " << num1 << " and " << y << " equals " << r << endl;
            std::cout <<"Name is " << name << endl;
        }

    private:
        string name = "Max";
};

// assigne value to a static variable
int MyClass::num1 = 4560;

int main(){

    MyClass myclass;

    myclass.avg();

    MyClass::assign(45);

    myclass.avg();

    myclass.sum(20, 30);

    std::cout << "\nThe static variable equals " << myclass.num1 << endl;

    return 0;
}