# include <iostream>
using namespace std;


int main(){

    int loop_end;

    std::cout << "Enter an integer number to loop for: " << endl;
    std::cin >> loop_end;

    for (int i = 0; i < loop_end; i++){
        if (i % 2 == 0){
            continue;
        }
        std::cout << i << endl;
    }

    return 0;
}