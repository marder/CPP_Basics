#include <iostream>
using namespace std;

int main()
{

    int nums[5] = {26, 137, 29, 13, 69};

    nums[1] = 338;

    nums[3] = 12;

    for (int i = 0; i < 5; ++i)
    {
        cout << nums[i] << endl;
    }

    return 0;
}