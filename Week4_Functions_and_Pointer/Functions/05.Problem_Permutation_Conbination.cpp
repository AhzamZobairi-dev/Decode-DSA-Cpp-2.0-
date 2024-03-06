/*            NESTED FUNCTION CALL

    main --> Combination --> factorial
    main --> Permutation --> factorial
    
*/

#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i =2; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int Combination(int n, int r)
{
    int npr = (factorial(n)/factorial(n-r)); 
    int ncr = (npr/factorial(r));
    return ncr;
}

int Permutation(int n, int r)
{
    int npr = (factorial(n)/factorial(n-r)); 
    return npr;
}

int main()
{
    int n,r;

    cout << "Enter n : ";
    cin >>n;

    cout << "Enter r : ";
    cin >>r;

    int nCr = Combination(n,r);         
// Entire calculation of nCr via formula is made into a function for better reablity
// and in further use case we need not to write entrire formula to calculate nCr 
// instead we can just call the function "Combination" which will further call 
// "factorial" function.

// Similarly we can make a function for permutation.
    int nPr = Permutation(n,r);

    cout << "The nCr " << nCr << endl << "The nPr : " << nPr;
}