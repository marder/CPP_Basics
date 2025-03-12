#include <iostream>
using namespace std;

void change_value(int *n)
{

    *n = 13;
}

int main()
{

    int number = 65;

    cout << "Number (before): " << number << endl;

    change_value(&number);

    cout << "Number (after): " << number;

    return 0;
}