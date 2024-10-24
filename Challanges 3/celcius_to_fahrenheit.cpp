#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;
    cout << "Celsius: ";
    cin >> celsius;
    fahrenheit = 9.0 / 5 * celsius + 32; //9.0 to get decimal value
    cout << "Fahrenheit: " << fahrenheit << endl;
    
    return 0;
}
 
 