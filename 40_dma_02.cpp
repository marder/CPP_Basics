#include <iostream>
using namespace std;

int main()
{

    string *variable_title = new string;

    getline(cin, *variable_title);

    cout << *variable_title << endl;

    delete variable_title;

    return 0;
}