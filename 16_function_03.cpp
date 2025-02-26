#include <iostream>
using namespace std;

int add_numbers(int, int);

int main()
{

    int total = add_numbers(6, 9);
    cout << "Sum: " << total << endl;

    return 0;
}

int add_numbers(int n1, int n2)
{
    int sum = n1 + n2;
    return sum;
}