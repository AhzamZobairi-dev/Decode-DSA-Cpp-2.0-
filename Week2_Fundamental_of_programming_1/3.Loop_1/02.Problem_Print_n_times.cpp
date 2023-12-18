/*
    Ques : Print hello world 'n' times in separate lines. Take 'n' as
input from user
*/

#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "How many time messages to be printed : ";
    cin >> n;

    for (int i = 1; i <= n; i++)        //i is variable for only inside of loop (local variable) and cant access it from outside of loop  
                                        // for accessing i outsid eof loop we needed to declare it outside.
    {
        cout << "Hello World" << endl;
    }

    return 0;
}