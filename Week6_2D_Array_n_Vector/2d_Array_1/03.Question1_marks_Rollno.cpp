/*
Ques : Write a program to store roll number and marks obtained by 4 students side by side in a
matrix.

*/

#include<iostream>

using namespace std;

int main()
{
    int arr[4][2];
    
    for(int i=0,j=0; i<4; i++)
    {
            cout << "Enter the Rollnumber :" ;
            cin >> arr[i][j];

            cout << "Enter the Marks :" ;
            cin >> arr[i][j+1];
    }

    for(int i=0, j=0; i<4; i++)
    {
            cout << "Rollnumber :" << arr[i][j] << endl;
            cout << "Marks :" << arr[i][j+1] << endl;
    }
}