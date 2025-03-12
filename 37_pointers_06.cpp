#include <iostream>
using namespace std;

void find_square(int *n)
{

    int square = *n * *n;

    *n = square;
}

int main()
{

    int number;
    cin >> number;

    find_square(&number);

    cout << number << endl;

    return 0;
}