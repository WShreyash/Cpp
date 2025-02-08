/*rules - Prohibition of Duplicate Case Values
case 1:
    code;
case 1:
    code;

error:case label value has already appeared in this switch at line __

Switch statements are exclusively designed to handle integer or character values
*/

#include <iostream>
using namespace std;

int main()
{
    char rank = 'Z';

    switch (rank)
    {
    case 'A':
        cout << "Welcome Uppermoon Rank A" << endl;
        break;
    case 'B':
        cout << "Welcome Uppermoon Rank B" << endl;
        break;
    case 'C':
        cout << "Welcome Uppermoon Rank C" << endl;
        break;
    default:
        cout << "Unknown Entity" << endl;
        break;
    }
    return 0;
}

/*#include <iostream>
using namespace std;

int main(){
    const int x=6;
    const int y=9;

    switch(x+y){
        case 7:
        cout<<"Sum Is 7"<<endl;
        break;
        case 16:
        cout<<"Sum Is 16"<<endl;
        break;
        case 15:
        cout<<"Sum Is 15"<<endl;
        break;
    }
    return 0;
}*/

/*#include <iostream>
using namespace std;

int main()
{
    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday"<<endl;
        break;
    case 2:
        cout << "Tuesday"<<endl;
        break;
    case 3:
        cout << "Wednesday"<<endl;
        break;
    case 4:
        cout << "Thursday"<<endl;
        break;
    case 5:
        cout << "Friday"<<endl;
        break;
    case 6:
        cout << "Saturday"<<endl;
        break;
    case 7:
        cout << "Sunday"<<endl;
        break;
    }

    return 0;
}*/

/*Nested Switch Case - hinder code readability (not recommended)
#include <iostream>
using namespace std;

int main() {
    int x = 2;
    int y = 1;

    switch (x) {
        case 1:
            cout << "x is 1." << endl;
            switch (y) {
                case 1:
                    cout << "y is 1." << endl;
                    break;
                default:
                    cout << "y is not 1." << endl;
            }
            break;
        default:
            cout << "x is not 1." << endl;
    }

    return 0;
}*/