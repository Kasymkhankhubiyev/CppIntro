# include <iostream>
using namespace std;

class opOverload{
    int m;
    public: 
        opOverload(){} // generator

        void values(){
            std::cout << "Enter any number" <<endl;
            std::cin >> m;
        }

        void operator++(){ // for ++var
            m++;
        }

        void operator++(int){  // for var++
            m++;
            // return *this;
        }

        void display(){
            std::cout << "The number is " << m << endl; 
        }
};

int main(){
    
    opOverload op;
    op.values();
    op.display();
    op++;
    op.display();
    ++op;
    op.display();
    
    return 0;
}