//              INFINITE LOOP

#include <iostream>
using namespace std;

int main()
{
    while('a'<'b')  //Here a&b is character not int. So comparision between them is based on ASCII value of both character
//       (97 > 98)
    {
        cout << "Malayalam is a palindrome"<<endl;
    }   

    return 0;
}

/*
Since we do not have any circumastance that makes the loop to terminate then 
we can say the loop will keep running and will not stop indefinitely.

This make it an INFINITE LOOP. It can give some error as segmentation fault.
*/
