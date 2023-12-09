/*
Ques : Write a program to check whether a
given character is a vowel or a consonant.
*/

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Input a character : ";
    cin >> ch;

    int ascii = (int)ch;

    if( (ascii>=65 && ascii <=90) || (ascii >= 97 && ascii <=122))
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || || ch == 'o' || ch == 'u')
        {
            cout << "The Character is Vowel"
        }
        else
        {
            cout << "The CHracter is Consonent"
        }
    }
    else{
        cout << " Not an Alphabet";
    }
}