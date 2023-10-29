# include <iostream>
using namespace std;


class MyClass{
    public:
        int m, n;

        MyClass(){
            this->m = 0;
            this->n = 0;
        }
        
        MyClass(int m, int n){
            this->n = n;
            this->m = m;
        }

        void display(){
            std::cout << "(" << m << ' ' << n << ")" << endl;
        }

        friend MyClass operator+(MyClass &obj1, MyClass &obj2);
};

MyClass operator+ (MyClass &obj1, MyClass &obj2){
    MyClass obj(obj1.m + obj2.m, obj1.n + obj2.n);
    return obj;
}


int main(){
    MyClass obj1(10, 20);
    MyClass obj2(10, 10);

    std::cout << "The first object is: ";
    obj1.display();

    std::cout << "The second object is: ";
    obj2.display();

    obj1 = obj1 + obj2;
    std::cout << "The sum of these two objects is: ";
    obj1.display();

    return 0;
}