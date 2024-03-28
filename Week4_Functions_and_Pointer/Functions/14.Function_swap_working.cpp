#include <iostream>
using namespace std;

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;        
    return 0;
}

/* NOTE -- Here instead of swapping the number in main 
function itself we are making a new function called swap 
and passing our variable a and b to it. But when you 
reprint the value of a and b after the swap function is 
called we can observe the value in variable a and b is not 
swapped. It is because the variable inside the main 
function A and B is local to that particular function and 
is not accessible by the function declared that is swap 
function And when we look at the address of all those 
variable in main function and in swap function will have a 
clear idea of that.

*/