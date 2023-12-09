/*
Ques : Write a C++ program to input any character and check 
whether it is the alphabet, digit or special character.
*/

#include <iostream>
using namespace std;

int main()
{   
    char ch;
    cout << "Enter a character : ";
    cin >> ch;

    int ascii = (int)ch;
    
    if( (ascii>=65 && ascii<= 90) || (ascii>= 97 && ascii<= 122))
    {
        cout << "An Alphabet";
    }
    else if(ascii >=48 && ascii <= 57)
    {
        cout << "A digit";
    }
    else
    {
        cout << "Special Character";
    }   

    return 0;                                                           
}