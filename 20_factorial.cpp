#include <iostream>
using namespace std;

int compute_factorial(int n)
{
    int factorial = 1;

    for (int i = 1; i <= n; ++i)
    {
        factorial = factorial * i;
    }

    return factorial;
}

int main()
{

    int number;
    cin >> number;

    int total = compute_factorial(number);
    cout << total << endl;

    return 0;
}