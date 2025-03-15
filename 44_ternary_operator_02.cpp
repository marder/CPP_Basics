#include <iostream>
using namespace std;

int main()
{

    cout << "Enter a number: " << endl;

    int number;
    cin >> number;

    string result = (number % 2 == 0) ? "Even" : "Odd";

    cout << result << endl;

    return 0;
}