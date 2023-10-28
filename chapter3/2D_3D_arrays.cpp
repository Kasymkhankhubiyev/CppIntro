# include <iostream>
using namespace std;


int main(){
    int array[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    std::cout << "This is 2D array: \n";
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            std::cout << array[i][j] << ' ';
        }
        std::cout << endl;
    }

    int arr_3d[2][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
                            {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}};

    std::cout << "This is 3D array with shape (1, 3, 3)\n";
    for (int k = 0; k < 2; k++){
        for (int i = 0; i < 3; i++){
            for (int j = 0; j< 3; j++){
                std::cout << arr_3d[k][i][j] << ' ';
            }
            std::cout << endl;
        }
        std::cout << endl;
    }

    return 0;
}