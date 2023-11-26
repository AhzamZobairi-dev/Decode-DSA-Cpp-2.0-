/*
WAP to find the difference between ASCII of two characters ,take them as input .
*/

#include <iostream>
using namespace std;
int main()
{
    char ch1,ch2 ;
    cout << "Enter First character : ";
    cin >> ch1 ;
    cout << "\nEnter Second character : ";
    cin >> ch2 ;
    int z = ch1 - ch2;      // implicit typecasting
    cout << "The difference in ASCII value of " << ch1 <<" and " << ch2 <<" is " << z << endl; 

//OR    -- implicit typecasting
    cout << "The difference in ASCII value of " << ch1 <<" and " << ch2 <<" is " << ch1-ch2 << endl; 

//OR    -- explicit typecasting
    int x = int(ch1);
    int y = int(ch2);
    z = x - y;
    cout << "The difference in ASCII value of " << ch1 <<" and " << ch2 <<" is " << z << endl; 

//OR    -- explicit typecasting
    cout << "The difference in ASCII value of " << ch1 <<" and " << ch2 <<" is " << int(ch1)-int(ch2) << endl; 


    return 0;
}