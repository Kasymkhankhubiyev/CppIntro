# include <iostream>
using namespace std;


struct MyStruct{
    int age;
    string name;
};

int main(){
    // create a struct obj
    MyStruct obj = {17, "Max"};
    // create a pointer to struct
    MyStruct *pstruct = &obj;
    
    std::cout << "Name is " << pstruct->name << endl;
    std::cout << "Age is " << pstruct->age << endl;

    return 0;
}