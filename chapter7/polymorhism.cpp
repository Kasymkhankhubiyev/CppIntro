#include <iostream>
using namespace std;


void display(int x){
    std::cout << "You entered an integer " << x << endl;
}

void display(float y){
    std::cout << "You entered a float " << y << endl;
}

void display(char const *c){
    std::cout << "Char is " << c << endl;
}

int main(){
    display(10);
    display((float)0.5);
    display('d');

    return 0;

}