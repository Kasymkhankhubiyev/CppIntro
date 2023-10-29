# include <iostream>
using namespace std;


class F1Car{
    protected:
        string team;

    public:
        void get_data(){
            std::cout << "Enter the team name: " << endl;
            std::cin >> team;
        }

        void show_data(){
            std::cout << "Team name: " << team << endl;
        }
};


class Engine: public F1Car{
    protected:
        int LmotrNo;

    public:
        void get_data(){
            // Fill in data for the base class
            F1Car :: get_data();
            std::cout << "Enter light mototr number: " << endl;
            std::cin >> LmotrNo;
        }

        void show_data(){
            F1Car::show_data(); //display the base class data
            std::cout << "Ligth motor number is " << LmotrNo << endl;
        }
};


class Hydrolic: public F1Car{
    protected:
        float price;
    public:
        void get_data(){
            F1Car::get_data();
            std::cout << "Enter heavy motor price: " << endl;
            std::cin >> price;
        }

    void show_data(){
        F1Car::show_data();
        std::cout << "The Heavy motor price is " << price << endl;
    }
};


class Fuel: public Engine{
    protected:
        int capacity;

    public:
        void get_data(){
            Engine::get_data();
            std::cout << "Enter Gear motor capacity: " << endl;
            std::cin >> capacity;
        }

        void show_data(){
            Engine::show_data();
            std::cout << "The Gear motor capacity is " << capacity << endl;
        }
};


class NoFuel: public Engine{
    protected:
        int capacity;

    public:
        void get_data(){
            Engine::get_data();
            std::cout << "Enter Non Gear motor capacity: " << endl;
            std::cin >> capacity;
        }

        void show_data(){
            Engine::show_data();
            std::cout << "The Non Gear motor capacity is " << capacity << endl;
        }
};


class Race: public Hydrolic{
    protected: 
        int passengers_number;

    public:
        void get_data(){
            Hydrolic::get_data();
            std::cout << "Enter passengers capacity: " << endl;
            std::cin >> passengers_number;
        }

        void show_data(){
            Hydrolic::show_data();
            std::cout << "Passengers capacity is " << passengers_number << endl;
        }
};


class Sprint: public Hydrolic{
    protected:
        int max_load;

    public:
        void get_data(){
            Hydrolic::get_data();
            std::cout << "Enter max goods load: " << endl;
            std::cin >> max_load;
        }

        void show_data(){
            Hydrolic::show_data();
            std::cout << "Max goods load is " << max_load << endl;
        }
};


int main(){
    Fuel fuel;
    Race race;

    std::cout << "\nEnter vehicle details: " << endl;
    fuel.get_data();
    race.get_data();

    std::cout << "\nThe vehicle specifications are:  " << endl;
    fuel.show_data();
    race.show_data();

    return 0;
}