# include <iostream>
using namespace std;


int main(){

    int arr[6];
    std::cout << "Enter 6 number: " << endl;

    for (int i = 0; i < 6; i++){
        std::cin >> arr[i];
    }

    std::cout << "Your numbers are: " << endl;
    for (int i = 0; i < 6; i ++){
        std::cout << arr[i] << " ";
    }

    return 0;
}