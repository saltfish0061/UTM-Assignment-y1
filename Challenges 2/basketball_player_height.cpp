#include <iostream>
using namespace std;

int main() {
    int height = 75;
    int feet = height / 12;
    int inches = height % 12;
    cout << "The height of the basketball player is " << feet << " feet " << inches << " inches." << endl;
    return 0;
}