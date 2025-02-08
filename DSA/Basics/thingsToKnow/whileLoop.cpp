#include <iostream>
using namespace std;

int main()
{   
    //calculating factorial using while loop
    int n = 6;
    int factorial = 1;

    while (n > 0)
    {
        factorial = factorial * n;
        n--;
    }
    cout << factorial << endl;

    
    return 0;
}