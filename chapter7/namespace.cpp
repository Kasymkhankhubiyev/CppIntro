# include <iostream>
using namespace std;
namespace mySpace{
    void nFunc(){
        cout << "\nFunction of mySpace namespace." << endl; 
    }
} // namespace mySpace


namespace newSpace{
    void nFunc(){
        cout << "\nFunction of newSpace namespace." << endl;
    }
}


int main(){

    mySpace::nFunc();
    newSpace::nFunc();

    return 0;
}
