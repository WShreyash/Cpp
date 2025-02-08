#include <iostream>
using namespace std;
int main()
{
    string Eminence = "Shadow";
    cout << Eminence << endl;
    cout << Eminence[0] << endl;

    // storing size of string in len variable
    int len = Eminence.size();
    cout << len << endl;
    cout << Eminence[len - 1] << endl;

    // Modifying char
    Eminence[len - 2] = 'O';
    cout << Eminence << endl;

    return 0;
}