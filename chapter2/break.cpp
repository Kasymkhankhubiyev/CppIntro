# include <iostream>
using namespace std;


int main(){
    int loop_end;
    std::cout << "Enter a number to loop for: \n";
    std::cin >> loop_end;

    for (int i = 0; i < loop_end; i++){
        if (i == 4){
            break;
        }
        std::cout << i << endl;
    }

    return 0;
}