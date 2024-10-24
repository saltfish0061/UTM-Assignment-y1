#include <iostream>
using namespace std;

int main() {
    double mm = 1.8;
    double cm = mm * 0.1;
    double inches = cm * 0.3937;

    cout << "The oceans have risen " << cm << " cm and " << inches << " inches over the past century." << endl;

    return 0;
}