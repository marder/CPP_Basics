#include <iostream>
using namespace std;

void swap_numbers(int *n1, int *n2)
{
    int temp;

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{

    int number1 = 69;
    int number2 = 111;

    swap_numbers(&number1, &number2);

    cout << "After swapping" << endl;
    cout << "number1: " << number1 << endl;
    cout << "number2: " << number2 << endl;

    return 0;
}