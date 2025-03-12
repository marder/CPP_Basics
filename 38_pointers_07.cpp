#include <iostream>
using namespace std;

int *add_ten(int *pt)
{

    *pt = *pt + 10;

    return pt;
}

int main()
{

    int number = 13;

    int *result = add_ten(&number);

    cout << "Result: " << *result << endl;

    return 0;
}