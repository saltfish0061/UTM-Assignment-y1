#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int ans;
    srand(time(NULL));
    int num1 = rand() % 9 + 1; //random number between 1 and 9
    int num2 = rand() % 9 + 1; //random number between 1 and 9

    cout << right << setw(4) << num1 << endl;
    cout << "+  " << num2 << endl;
    cout << "----" << endl;
    cin >> ans;

    cout << "The correct answer is " << num1 + num2 << endl;

    return 0;
}



    


