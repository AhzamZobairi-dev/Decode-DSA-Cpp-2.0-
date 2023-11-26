/* Find the output for this code. Let input:- 3 2

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter first number\n";
    cin>>x; // user will give 'x' a value.
    int y;
    cout<<"Enter second number\n";
    cin>>y; // user will give 'y' a value.
    cout<<(x!=y)<<" "<<(x>=y);



Solution -- 

1. Dry run 
    - declared a varibale x
    - and asked user to input a value for x i.e 3
    - Now a new variable y is declared
    - again user is asked to input a value for y i.e 2
    - evaluate the statement 
        cout<<(x!=y)<<" "<<(x>=y);

    - first (x!=y) i.e (3 != 2) gives us true i.e 1
    - then (x>=y) i.e (3 >= 2) gives us true i.e 1
    - there is a space between the output

2. Output

1 1

*/


#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter first number\n";
    cin>>x; // user will give 'x' a value.
    int y;
    cout<<"Enter second number\n";
    cin>>y; // user will give 'y' a value.
    cout<<(x!=y)<<" "<<(x>=y);
}