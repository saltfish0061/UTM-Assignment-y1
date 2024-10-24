#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double R, E, S; //refer the cout
    cout << "The length of the row, in feet: ";
    cin >> R;
    cout << "The amount of space used by an end-post assembly, in feet: ";
    cin >> E;
    cout << "The amount of space between the vines, in feet: ";
    cin >> S;

    //formula V = (R -2E)/S
    int V = (R - 2 * E) / S;
    cout << "The number of grapevines that will fit in the row: " << V << endl;

    return 0;
}