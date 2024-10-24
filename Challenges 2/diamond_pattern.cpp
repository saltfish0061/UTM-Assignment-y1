#include <iostream>
using namespace std;

int main() {

    int rows = 7;
    int middle = rows / 2 + 1; //integer will always round down after division

    for(int i = 1; i <= rows; i++){ //each rows
        if(i < middle){ //first half
            for(int j = middle; j > i; j--){ //space inversely proportional to the rows
                cout<< " ";
            }

            for(int k = 0; k < (2 * i - 1); k++ ){ //to get the number of * by deriving the formula i + (i - 1)
                cout << "*";
            }
        cout << endl; //next line

        }else{ //second half
            for(int j = middle; j < i; j++){ //space directly proportional to the rows
                cout<< " ";
            }

            for(int k = 0; k < (2 * (rows - i)) + 1; k++ ){ //to get the number of * via decrement of star with the logic
                cout << "*";
            }
            cout << endl;
        }
        
    }

    return 0;
}