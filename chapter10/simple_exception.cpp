# include <iostream>
using namespace std;


class MyClass{
    public:
        int x, y;

        MyClass(){
            x = 0;
            y = 0;
        }

        MyClass(int x, int y){
            this->x=x;
            this->y=y;
        }

        void check(){
            if (x < 0){
                throw x;
            }else{
                if (y > 9){
                    throw y;
                }
            }
        }
};


int main(){
    MyClass m1, m2(10, 11);

    try{
        m1.check();
        m2.check();
    }
    catch(int y){
        std::cout << "Caught exeption of " << y << endl;
    }
}