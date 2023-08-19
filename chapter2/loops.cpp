# include <iostream>
using namespace std;

int main(){

    for (int i = 1; i <=31; i++){
        std::cout << i << ' ';
    }

    cout << ' ' << endl;
    int counter = 1;

    while (counter <= 30){
        std::cout << counter << ' ';
        counter ++;
    }

    cout << ' ' << endl;
    counter = 1;

    //executes at least once
    do {
        std::cout << counter << ' ';
        counter ++;
    } while (counter <= 31);

    cout << "\n" << "nested loop now" << endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j <=i; j++){
            cout << "*";
        }
        cout << "\n" << endl;
    }

    return 0;
}