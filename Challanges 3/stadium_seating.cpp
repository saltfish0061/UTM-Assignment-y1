#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int classA, classB, classC;
    cout << "NUmber of tickets sold for each class: " << endl;
    cout << "Class A: ";
    cin >> classA;
    cout << "Class B: ";
    cin >> classB;
    cout << "Class C: ";
    cin >> classC;

    double total = classA * 15 + classB * 12 + classC * 9;
    cout <<"The total income generated from ticket sales is: $" <<  fixed << setprecision(2) << total << endl;

    return 0;
}