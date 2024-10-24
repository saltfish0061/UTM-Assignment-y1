#include <iostream>
using namespace std;

int main() {
    int cookies = 30;
    int servings = 10;
    int calories = 240;

    double calories_per_cookie = (double)calories / (cookies / servings); 

    int eaten;
    cout << "How many cookies did you eat? ";
    cin >> eaten;
    cout << "You consumed " << eaten * calories_per_cookie << " calories." << endl;
    return 0;
}