# include <iostream>
using namespace std;

int max(int a, int b){
    if (a >= b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int a, b;
    std::cout << "Enter a value a: \n";
    std::cin >> a;
    std::cout << "Enter a value b: \n";
    std::cin >> b;

    int max_val = max(a, b);

    printf("\nmax out of (%d, %d) is %d", a, b, max_val);

    return 0;
}