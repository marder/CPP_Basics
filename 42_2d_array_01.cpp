#include <iostream>
using namespace std;

int main()
{

    int numbers[3][2] = {
        {98, 34},
        {13, 69},
        {98, 12}};

    for (int i = 0; i < 3; ++i)
    {

        for (int j = 0; j < 2; ++j)
        {
            cout << numbers[i][j] << ", ";
        }
    }

    cout << endl;

    return 0;
}