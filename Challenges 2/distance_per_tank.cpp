#include <iostream>
using namespace std;

int main() {
    //gpt = gallon per tank, mpg = miles per gallon, dpt = distance per tank
    float gpt, mpg_town, mpg_highway, dpt_town, dpt_highway;
    gpt = 20.0f;
    mpg_town = 23.5f;
    mpg_highway = 28.9f;

    dpt_town = gpt * mpg_town;
    dpt_highway = gpt * mpg_highway;    

    cout << "Distance per tank in town: " << dpt_town << " miles" << endl;
    cout << "Distance per tank in highway: " << dpt_highway << " miles" << endl;

    return 0;
}