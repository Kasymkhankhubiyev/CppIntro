# include <iostream>
using namespace std;

double count_cylinder_volume(int r, int h){
    return 2 * 3.14 * r * h;
}

int main(){

    int r, h;

    cout << "Enter a cylinder radius: "<< endl;
    cin >> r;
    cout << "Enter a cylinder height: " << endl;
    cin >> h;

    double volume = count_cylinder_volume(r, h);

    cout << "The cylinder volume is: " << volume << endl;

    return 0;
}