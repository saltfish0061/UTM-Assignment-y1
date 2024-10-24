/*The Yukon Widget Company manufactures widgets that weigh 12.5
pounds each. Write a program that calculates how many widgets are
stacked on a pallet, based on the total weight of the pallet. The
program should ask the user how much the pallet weighs by itself
and with the widgets stacked on it. It should then calculate and
display the number of widgets stacked on the pallet.
*/

#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
    double pallet_weight, total_weight, widget_weight = 12.5;
    int number_of_widgets;

    cout << "Weight pallet(lbs): ";
    cin >> pallet_weight;

    cout << "Weight pallet with widgets(lbs): ";
    cin >> total_weight;

    number_of_widgets = (total_weight - pallet_weight) / widget_weight;

    cout << "The number of widgets stacked on the pallet: " << number_of_widgets << endl;

    return 0;
}