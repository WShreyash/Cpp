#include <iostream>
using namespace std;

/* pass by value - Creates a copy of data, Original data is not Modified,
Used for rimitives (int, float, etc.)
void doSomething(int num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main()
{
    int num = 10;
    doSomething(num); //makes a copy of the orignal data and gives it to the funtion
    cout <<"Orignal: "<< num << endl;
}*/

/*// pass by reference - Uses memory address (&waifu) to change the orignal data
void doSomething(string &waifu){
    waifu="Nakano Miku";
    cout<<waifu<<endl;
}


int main(){
    string waifu="Hatsune Miku";
    doSomething(waifu);
    cout<<waifu<<endl;
}*/

// array - always goes with pass by reference, doesnt need memory address &
void doSomething(int arr[], int n)
{   
    arr[0]+=21;
    cout << "Value of arr inside funtion: " << arr[0] << endl;
}

int main()
{
    int n = 5; //storing size of array
    int arr[n];

    for(int i=0;i<=n-1;i++){
        cin>>arr[i];         //taking user input 
    }

    doSomething(arr, n);
    cout << "Value of arr inside int main: " << arr[0] << endl;    

    return 0;
}