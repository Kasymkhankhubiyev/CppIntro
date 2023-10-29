# include <iostream>
using namespace std;


class Average{
    private:
        int num1, num2, r;

    public:
        Average(int num1, int num2){
            this->num1 = num1;
            this->num2 = num2;
        }

        void getAverage(){
            std::cout << "\nThe avarage of " << this->num1 << " and " <<
                this->num2 << " is " << (this->num1 + this->num2) / 2 << endl;
        }

        ~Average(){
            std::cout << "The Average class was destroyed" << endl;
        }
};


int main(){

    Average avg(3, 5);

    avg.getAverage();

    return 0;
}