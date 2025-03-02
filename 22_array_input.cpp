#include <iostream>
using namespace std;

int main()
{

    double arr[6];

    for (int i = 0; i < 6; ++i)
    {
        cin >> arr[i];
    }

    double sum = 0.0;
    for (int i = 0; i < 6; ++i)
    {
        sum = sum + arr[i];
    }

    cout << sum / 6 << endl;

    return 0;
}