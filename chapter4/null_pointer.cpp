# include <iostream>
using namespace std;


int main(){

    int *ptr = nullptr; // declaring null pointer
    int *nptr = NULL;

    if(ptr != NULL){
        std::cout << "Legal adress"<< endl;
    }else{
        std::cout << "NULL pointer" << endl;
    }

    if (nptr != nullptr){
        std::cout << "Legal adress"<< endl;
    }else{
        std::cout << "NULL pointer" << endl;
    }

    return 0;
}