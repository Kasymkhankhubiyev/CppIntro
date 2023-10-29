#include <iostream>
# include <string.h>
using namespace std;


class concat{
    public:
        string str;

        concat(string s){
            str = s;
        }

        concat operator + (concat s){
            str = str + s.str;
            concat obj(str);
            return obj;
        }

        void display(){
            std::cout << str<<endl;;
        }
};


int main(){

    concat obj1("name");
    concat obj2("surname");
    std::cout << "The first string is: ";
    obj1.display();
    std::cout << "The second string is: ";
    obj2.display();

    obj1 = obj1 + obj2;

    std::cout << "Concatenate two strings: ";
    obj1.display();

    return 0;
}