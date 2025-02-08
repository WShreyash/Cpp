#include <iostream>
using namespace std;

int main()
{
    /*// condition inside for loop
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)    //printing even nums, use (i % 2 != 0) for odd nums
        {
            cout << i << endl;
        }
    }

    // nested for loop
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "i=" << i << " j=" << j << endl;
        }
    }*/

    int nums[] = {11, 9, 6, 7, 3, 8};
    int target = 7;

    // Using 'break' to exit the loop early when the target is found
    for (int num : nums)
    {
        if (num == target)
        {
            cout << "Target Found: " << target << endl;
            break;
        }
        cout << "Cheaking: " << num << endl;
    }

    // Using 'continue' to skip specific elements
    for (int num2 : nums)
    {
        if (num2 % 2 == 0) // Skip even numbers
        {
            continue;
        }
        cout << num2 << endl;
    }

    return 0;
}