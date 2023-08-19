# include <iostream>
using namespace std;

int rectangle_area(int a, int b){
    return a * b;
}

int rectangle_perimeter(int a, int b){
    return (a + b) * 2;
}

int square_area(int a){
    return a * a;
}

int square_perimeter(int a){
    return 4 * a;
}

double circle_area(int r){
    return 3.14 * r * r;
}

double circle_perimeter(int r){
    return 3.14 * 2 * r;
}

void proccess_rectangle(){
    int area, perimeter;
    int a, b;
    cout << "Insert a: " << endl;
    cin >> a;
    cout << "Insert b: " << endl;
    cin >> b;
    area = rectangle_area(a, b);
    perimeter = rectangle_perimeter(a, b);

    cout << "The rectangle area is: " << area << endl;
    cout << "The rectangle perimeter is: " << perimeter << endl;
}

void process_square(){
    int area, perimeter;
    int a;
    cout << "Insert a: " << endl;
    cin >> a;
    area = square_area(a);
    perimeter = square_perimeter(a);

    cout << "The rectangle area is: " << area << endl;
    cout << "The rectangle perimeter is: " << perimeter << endl;
}

void process_circle(){
    int area, perimeter;
    int r;
    cout << "Insert radius: " << endl;
    cin >> r;
    area = circle_area(r);
    perimeter = circle_perimeter(r);

    cout << "The rectangle area is: " << area << endl;
    cout << "The rectangle perimeter is: " << perimeter << endl;
}


void choose_figure(char fig){
    if (fig == 'r'){
        proccess_rectangle();
    }else {
        if (fig == 's'){
            process_square();
        }else {
            if (fig == 'c') {
                process_circle();
            }
        }
    }
}

int main(){

    char figure;

    cout << "Hello! lets count an area and perimeter." << "\n";
    cout << "Write r to choose rectangle\n";
    cout << "Write s to choose square\n";
    cout << "Write c to choose circle\n" << endl;
    cin >> figure;

    choose_figure(figure);

    return 0;
}