#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double test1, test2, test3, test4, test5, average;
    cout << "Test 1: ";
    cin >> test1;
    cout << "Test 2: ";
    cin >> test2;
    cout << "Test 3: ";
    cin >> test3;
    cout << "Test 4: ";
    cin >> test4;
    cout << "Test 5: ";
    cin >> test5;

    average = (test1 + test2 + test3 + test4 + test5) / 5;

    cout << "Average score: " << fixed << setprecision(1) << average << endl;

    return 0;
}
