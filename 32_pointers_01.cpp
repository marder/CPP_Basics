#include <iostream>
using namespace std;

int main()
{

    int num;
    cin >> num;

    int *pt = &num;

    cout << *pt << endl;

    return 0;
}