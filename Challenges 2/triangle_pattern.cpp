#include <iostream>
using namespace std;

int main() {

    int rows = 4;
    for(int i = 1; i <= rows; i++){ //each rows
        for(int j = rows; j > i; j--){ //space inversely proportional to the rows
            cout<< " ";
        }
        for(int k = 0; k < (2 * i - 1); k++ ){ //to get the number of * by deriving the formula i + (i - 1)
            cout << "*";
        }
        cout << endl; //next line
    }
    return 0;
}