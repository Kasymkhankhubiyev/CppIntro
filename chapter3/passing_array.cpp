# include <iostream>
using namespace std;

int coach(int train[], int s){
    int price = 0;

    for (int i = 0; i < s; i++){
        price += train[i];
    }
    return price;
}

int main(){

    int price, s;
    int train[3] = {1050, 1100};

    std::cout << "How many passengers?: ";
    std::cin >> s;

    price = coach(train, s);
    std::cout << "\nYour bill is " << price << endl;

    return 0;
}