#include <iostream>
using namespace std;

int main()
{

    int n;

    cin >> n;

    int *items = new int[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> *(items + i);
    }

    for (int i = 0; i < n; ++i)
    {
        cout << *(items + i) << endl;
    }

    return 0;
}