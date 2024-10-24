#include <iostream>
using namespace std;

int main() {
    double mm_15 = 3.3 * 15;
    double cm_15 = mm_15 * 0.1;
    double inches_15 = cm_15 * 0.3937;

    cout << "The ocean level will be expected to rise " << cm_15 << " cm and " << inches_15 << " inches in the next 15 years" << endl;

    return 0;
}