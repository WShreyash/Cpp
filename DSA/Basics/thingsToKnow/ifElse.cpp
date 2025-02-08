#include <iostream>
using namespace std;

int main()
{
    int marks;
    cin >> marks;
    char grade;
    if (marks < 25)
    {
        grade = 'F';
    }
    else if (marks <= 40)
    {
        grade = 'C';
    }
    else if (marks <= 70)
    {
        grade = 'B';
    }
    else
    {
        grade = 'A';
    }

    cout << "Grade: " << grade << endl;

    return 0;
}