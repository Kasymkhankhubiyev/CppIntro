# include <iostream>
using namespace std;

class diff{
    public:
        int m,n;
        
        diff(int x, int y){
            m = x;
            n = y;
        }

        void operator==(diff obj){
            if ((this->m == obj.m) && (this->n == obj.n)){
                std::cout << "These two objects are equal" << endl;
            }else{
                std::cout << "These two objects are not equal" << endl;
            }
        }

        void operator+=(diff obj){
            this->m += obj.m;
            this->n += obj.n;
        }

        void display(){
            std::cout << "m = " << m << " and n = " << n << endl;
        }
};


int main(){
    diff obj1(11, 12);
    diff obj2(11, 13);
    diff obj3(11, 12);

    std::cout << "Check if (11, 12) equals (11, 13)" << endl;
    obj1 == obj2;
    std::cout << "Check if (11, 12) equals (11, 12)" << endl;
    obj1 == obj3;
    std::cout << "Increment (11, 12) by (11, 13)" << endl;
    obj1 += obj2;
    obj1.display();

    return 0;
}