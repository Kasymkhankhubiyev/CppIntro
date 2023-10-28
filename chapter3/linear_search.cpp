# include <iostream>
using namespace std;


int main(){
    int size, e, flag = -1;

    std::cout << "Give an array size: \n";
    std::cin >> size;

    int array[size];

    std::cout << "Enter the array elements:\n";
    for (int i = 0; i < size; i++){
        std::cin >> array[i];
    }

    std::cout << "Enter what you want to search for: \n";
    std::cin >> e;

    for (int i = 0; i<size; i++){
        if (array[i] == e){
            flag = i;
            break;
        }
    }

    if (flag != -1){
        std::cout << "Index of the searched element " << e << " is " << flag << endl;
    }else{
        std::cout << "Not found" << endl;
    }

    return 0;
}