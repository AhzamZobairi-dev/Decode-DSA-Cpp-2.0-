/*  Ques : Print the nth fibonacci number.

sequence    --  1   1   2   3   5   8   13  21  34  55  89  144 233 377 610
term        --  1   2   3   4   5   6   7   8   9   10  11  12  13  14  15

*/  

#include <iostream>
using namespace std;

int main()
{   
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    
    int first =1;
    int second=1;
    int sum=0;

    
    for(int i =3;i <=n ; i++)
    {
        sum = first + second;
        first = second;
        second = sum;
    }
    cout << second << " ";
    return 0;
}