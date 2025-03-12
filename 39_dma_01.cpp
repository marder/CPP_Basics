#include <iostream>
using namespace std;

int main()
{

    int *number = new int;

    *number = 6969;

    cout << *number << endl;

    delete number;

    return 0;
}