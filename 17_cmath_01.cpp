#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double number;
    cin >> number;

    double square_root = sqrt(number);
    cout << square_root << endl;

    double cube_root = cbrt(number);
    cout << cube_root << endl;

    return 0;
}