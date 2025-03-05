#include <iostream>
#include <string>
using namespace std;

int main()
{

    string text1 = "Fortes adiuvat";
    string text2 = "fortuna ";

    text1.insert(7, text2);

    cout << text1 << endl;

    return 0;
}