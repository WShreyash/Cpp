/*Functions
--> Functions are set of code which performs something for you
--> Functions are used to modularise code
--> Functions are used to increase readability
--> Functions are used to use same code multiple times
--> void - which does not return anything (void refers to blank nothingness,cant use return function with void)
--> return - every funtion with return data type must have return funtion
--> parameterised
--> non parameterised
*/

#include <iostream>
using namespace std;

/*// non parameterised
void printName()
{
    cout << "Miku\n";
}

// parameterised
void sayHello(string name)
{
    cin >> name;
    cout << "Hello " << name << endl;
}

int main()
{
    printName(); // called a non parameterised void function

    string name;
    sayHello(name); // called a parameterised void function

    string name2; //using function again and again, can use multiple times
    sayHello(name2);
    return 0;
}*/

/* Adding two numbers - error if we use void function: a value of type "void" cannot be used to
initialize an entity of type "int"
int sum(int num1, int num2)
{
    int num3 = num1 + num2;
    return num3; // returns the value
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int result = sum(num1, num2);
    cout << result << endl;
    return 0;
}*/

/*// Adding two numbers using void function
void sum(int num1, int num2)
{
    int num3 = num1 + num2;
    cout << num3 << endl; // returns the value
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    sum(num1, num2);
    return 0;
}*/


//In_build functions (math.h - min, max)

int main(){
    int num1, num2;
    cin>>num1>>num2;
    int maximum=max(num1,num2);
    cout<<maximum<<endl;
}
