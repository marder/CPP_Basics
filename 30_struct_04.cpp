#include <iostream>
using namespace std;

struct Student
{

    int marks[4];

    double average_marks()
    {

        int sum = 0;

        for (int mark : marks)
        {
            sum = sum + mark;
        }

        return sum / 4.0;
    }
} student1;

int main()
{

    for (int i = 0; i < 4; ++i)
    {
        cin >> student1.marks[i];
    }

    cout << student1.average_marks() << endl;

    return 0;
}