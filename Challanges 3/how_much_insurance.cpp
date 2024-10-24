#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double replacement_cost;
    cout << "Replacement cost: ";
    cin >> replacement_cost;

    double insurance = replacement_cost * 0.8;
    cout << "Minimum amount of insurance should be purchased: $" << fixed << setprecision(2) << insurance << endl;

    return 0;
}