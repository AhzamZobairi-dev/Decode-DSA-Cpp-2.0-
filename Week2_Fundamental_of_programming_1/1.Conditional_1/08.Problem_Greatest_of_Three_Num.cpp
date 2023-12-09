/*
Ques : Take 3 positive integers input and print
the greatest of them.
*/


#include <iostream>
using namespace std;

int main()
{   
    int a,b,c;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << "Enter third number : ";
    cin >> c;

    if(a>b && a>c)
    {
        cout << a <<" is the largest";
    }
    if(b>a && b>c)
    {
        cout << b <<" is the largest";
    }
    if(c>a && c>b)
    {
        cout << c <<" is the largest";
    }

    return 0;                                                           
}


/*
Note;- we can solve this using else-if which we will do 
in further programs
*/