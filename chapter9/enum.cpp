# include <iostream>
using namespace std;


enum weekDays {Sunday, Monday, Tuesday, Wednesday, Thursday, 
                Friday=23, Saturday};

int main(){
    enum gender {max, checo=9, lewis, kimi=19, mick, ocom};

    for (int i = checo; i < ocom; i ++){
        std::cout << i << ' ';
    }
    std::cout << endl;
    weekDays d;
    d = Monday;
    std::cout << "The day of the week is " << d+1 << endl;

    return 0;
}