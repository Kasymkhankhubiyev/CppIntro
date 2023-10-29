# include <iostream>
using namespace std;


int add(int num1, int num2){
    return num1 + num2;
}

double add(float num1, double num2){
    return num1 + num2;
}

int add(int num1, float num2, int num3){
    return num1 + num2 + num3;
}

int main(){
    std::cout << "\nPolymorphism in addition methods: " << endl;
    std::cout << "Add method 1: 10 + 30 = " << add(10, 30) << endl;
    std::cout << "Add method 2: 9.1 + 29.9 = " << add((float)9.1, (double)29.9)  << endl;
    std::cout << "Add method 3: 3 + 1.5 + 21 = " << add(3, 1.5, 21) << endl;

    return 0;
}