#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number of students: ";
    cin >> n;
    int marks[n] ;

    cout << "Enter marks of " << n <<" students : ";
    for(int i = 0; i <= n-1; i++)         //n == 10 == {76 83 32 88 68 34 75 89 90 24}
    {
         cin >> marks[i];
    }
    for(int i = 0; i <= n-1; i++)
    {
         if(marks[i] < 35)    cout << i << " ";
    }
    return 0;
}