# include <iostream>
using namespace std;


int BinarySearch(int array[], int a, int b, int s){
    if (a <= b){
        int mid = (a + b) / 2;
        // printf("%d",mid);
        if (array[mid] == s){
            return mid;
        }
        if (array[mid] > s){
            return BinarySearch(array, a, mid-1, s);
        }
        if (array[mid] < s){
            return BinarySearch(array, mid+1, b, s);
        }
    }

    return -1;
}


int main(){
    // the array must be sorted
    int array[] = {-14, - 12, 0, 2, 4, 6, 22, 56, 123, 234};
    int size = sizeof(array) / sizeof(array[0]);
    printf("The size of an array is %d\n", size);

    int s;
    std::cout << "Enter an element to search: \n";
    std::cin >> s;

    int flag = BinarySearch(array, 0, size-1, s);

    if (flag == -1){
        std::cout << "Not found" << endl;
    }else{
        std::cout << "Index of the element " << s << " is " << flag << endl;
    }

    return 0;
}