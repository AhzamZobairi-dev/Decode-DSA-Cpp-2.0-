#include <iostream>
using namespace std;

int main()
{
/*
    int x = 12;
    int y = x * x;
    cout << y ;

We would have to change code for every new input and we 
cannot give input direclty to the code here. 
*/

    int x;
    cout<<"Enter a Number : ";
    cin >> x;
    int y = x*x;
    cout << "The Square of the number is : ";
    cout <<y;

// We can do like cascading operation
    cout << "\nThe Square of the number is : " << y << endl;

    return 0;
}