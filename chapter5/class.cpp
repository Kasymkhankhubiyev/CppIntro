# include <iostream>
using namespace std;

class Felidae{
    public:
    string cats;
    string tigers;

    void pet_name(){
        std::cout << "\nThe cat's name is: " << cats << endl;
        std::cout << "Tiger's pet name is: " << tigers << endl;
    }
};


int main(){
    Felidae obj1;

    obj1.cats = "Leo";
    obj1.tigers = "Max";
    obj1.pet_name();

    return 0;
}