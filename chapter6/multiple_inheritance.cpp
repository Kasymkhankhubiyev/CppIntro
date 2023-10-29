# include <iostream>
using namespace std;


class ring1{
    private:
        string ss;
        float cost;

    public:
        void get_data(){
            std::cout << "Enter Set Section and Cost:" << endl;

            std::cin >> ss >> cost;
        }

        void show_data(){
            std::cout << "\nThe Seat is " << ss << endl;
            std::cout << "Cost is" << cost << endl;
        }

};

class ring2{
    private:
        float spectators[3];
    public:
    void get_data(){
        for (int i = 0; i < 3; i++){
            std::cout << "Enter the " << i+1 << "section spectator: " << endl;
            std::cin >> spectators[i];
        }
    }
    void show_data(){
        for (int i = 0; i < 3; i++){
            std::cout << i+1 << "section spectators: " << spectators[i] << endl;
        }
    }
};

class Arena: public ring1, public ring2{
    private: 
        int guest;
    public:
        ring1 r1;
        ring2 r2;

        void get_data(){
            r1.get_data();
            std::cout << "Enter guest: " << endl;
            std::cin >> guest;
            r2.get_data();
        }

        void show_data(){
            std::cout << "\nGuest amount = " << guest << endl;
            r1.show_data();
            r2.show_data();
        }
};

int main(){
    Arena arena;
    arena.get_data();
    arena.show_data();

    return 0;
}