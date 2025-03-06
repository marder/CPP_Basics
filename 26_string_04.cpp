#include <iostream>
#include <string>
using namespace std;

int main()
{

    string text = "Fortes fortuna adiuvat";

    string sub_string = text.substr(7, 7);

    cout << sub_string << endl;

    return 0;
}