# include <iostream>
using namespace std;


int main(){
    int * ptr = new int(69);
    char * cptr = reinterpret_cast<char*>(ptr);

    std::cout << *ptr << endl;
    std::cout << *cptr << endl;
    std::cout << ptr << endl;
    std::cout << cptr << endl;

    return 0;
}