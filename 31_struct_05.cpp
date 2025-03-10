#include <iostream>
using namespace std;

typedef struct Complex
{
    double real;
    double imag;
} complex;

int main()
{

    complex c1, c2;

    cin >> c1.real;
    cin >> c1.imag;

    cin >> c2.real;
    cin >> c2.imag;

    complex result;

    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;

    cout << result.real << " + " << result.imag << "i";

    return 0;
}