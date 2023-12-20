/*
PRINT ALL UPPERCASE ALPHABET WITH THEIR ASCII VALUE
*/

#include <iostream>
using namespace std;

int main()
{   
    char j = 'A';
    int a = (int) j;
    
    for(int i =1; i <=26; i++)
    {
        cout << "ASCII value of " << (char)a <<" is " << a << endl;
        a++;
    }
    
    cout <<  endl << "Method 2" << endl ;
    for(int j =65; j<=90; j++)
    {
        cout << "ASCII value of " << (char)j <<" is " << j << endl;
    }
}