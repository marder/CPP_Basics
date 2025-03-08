#include <iostream>
using namespace std;

typedef struct Complex
{
    double real;
    double imag;
} complex;

int main()
{

    complex c1 = {.real = 21.3, .imag = 6.9};
    complex c2 = {.real = 18.3, .imag = 2.3};
    complex result;

    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;

    cout << "Result: " << result.real << " + " << result.imag << "i" << endl;

    return 0;
}