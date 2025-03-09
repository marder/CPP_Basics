#include <iostream>
using namespace std;

struct Uczen
{
    int oceny_matematyka;
    int oceny_polski;

    int oceny_razem()
    {
        return oceny_matematyka + oceny_polski;
    }
} student1;

int main()
{

    student1.oceny_matematyka = 45;
    student1.oceny_polski = 24;

    cout << "Oceny razem: " << student1.oceny_razem() << endl;

    return 0;
}