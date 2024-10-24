#include <iostream>
#include <math.h>
using namespace std;

int main() {

    double area_wooden_fence = 2 * 6 * 100 * 2;//two coats on both sides of the fence
    double gallon_paint = 340;
    double gallon_required = area_wooden_fence / gallon_paint;

    cout << "Approximate number of gallons of paint required to paint the fence is " << gallon_required << endl;
    //round up to make sure the gallon is enough for the fence
    cout << "The number of gallons of paint required to paint the fence is " << ceil(gallon_required) << endl; 

    return 0;
}