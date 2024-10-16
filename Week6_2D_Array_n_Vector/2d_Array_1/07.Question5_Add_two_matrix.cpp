//Ques : Write a program to add two matrices.

#include<iostream>
using namespace std;

int main()
{
    int r1,c1, r2, c2;
    cout << "Enter number of row and column respectively for first matrix : " ;
        cin >> r1 >> c1;
    cout << "Enter number of row and column respectively for second matrix : " ;
        cin >> r2 >> c2;    
    if(r1==r2  && c1==c2)
    {
        int arr[r1][c1];

        cout << "Enter the first Array : ";
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c1; j++)
            {
                cin >> arr[i][j]; 
            }
        }

        int brr[r2][c2];

        cout << "Enter the second Array : ";
        for(int i=0; i<r2; i++)
        {
            for(int j=0; j<c2; j++)
            {
                cin >> brr[i][j]; 
            }
        }

        for(int i=0; i<r2; i++)
        {
            for(int j=0; j<c2; j++)
            {
                cout << arr[i][j] + brr[i][j] << " "; 
            }
            cout << endl;
        }
    }
    else
        cout << "Can't calculate Matrix are of diffrent dimension\nMake sure both dimensions must be same ";

    return 0;
}
