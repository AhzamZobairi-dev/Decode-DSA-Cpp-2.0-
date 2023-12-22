// Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.

#include <iostream>
using namespace std;

int main()
{

// Method 1 -- when we know the ASCII value of character
    cout <<  "Method 1 " << endl;
    int n1 = 97;
    cout << "Lower case alphabet" << endl;
    while(n1 <= 122)
    {
       cout << (char)n1 << " - " << n1 << endl;
        n1++; 
    }
    
    cout << endl <<"Upper case alphabet" << endl;
    n1 = 65;
    while ( n1 <= 90 )
    {
        cout << (char)n1 << " - " << n1 << endl;
        n1++;
    }
   
    
// Method 2 -- when we do not know the ASCII value
    cout <<endl <<endl <<  "Method 2 " << endl;
    cout << "Lower case alphabet" << endl;
    int i = 0;
    char lc = 'a';
    while(i < 26)               // since with i=0 we have a the i+25 we will have z
    {
        cout << char(lc+i) << " is " << (int)lc + i << endl;        // excplicit type casting is not needed as (char+int = int)
        i++;
    }

    cout << "Upper case alphabet" << endl;
    i = 0;
    char uc = 'A';
    while(i < 26)
    {
        cout << char(uc+i) << " is " << uc+i << endl;              // as mentioned explicit typecasting is not needed
        i++;
    }
    return 0;
}