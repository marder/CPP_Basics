#include <iostream>
using namespace std;

void find_square(int number)
{

    int result = number * number;
    cout << "Square of " << number << " is " << result << endl;
}

int main()
{

    find_square(8);

    return 0;
}