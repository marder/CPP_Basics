#include <iostream>
using namespace std;

int main()
{

    double current_value = 616.69;
    double updated_value = 666.66;

    double temporary = current_value;

    current_value = updated_value;

    updated_value = temporary;

    cout << "Current Value: " << current_value << endl;
    cout << "Updated Value: " << updated_value << endl;

    return 0;
}