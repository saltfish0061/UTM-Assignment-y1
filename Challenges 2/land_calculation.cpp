#include <iostream>
using namespace std;

int main(){
    double acre = 43560;
    float sqft  = 10.7639f;

    double half_acre = acre / 2;
    //for half acre
    double num_of_sqft = half_acre;
    double num_of_sqmeter = num_of_sqft / sqft;

    cout << "Square feet in half acre is: " << num_of_sqft << " feets" <<endl;
    cout << "Square meters in half acre is: " << num_of_sqmeter << " meter square" <<endl;
    return 0;
}