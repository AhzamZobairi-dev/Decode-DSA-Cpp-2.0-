#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout << "Enter first number : ";
    cin >> x;
    cout << "Enter second number : ";
    cin >> y;
    cout << "Sum is : " << x+y << endl;
/*
Enter first number : 5
Enter second number : 3
Sum is : 8

HERE WE HAVE NOT GIVEN ANY endl IN FIRST AND SECOND COUT 
BUT THE THE PROMPT FOR FIRST AND SECOND NUMBER IS IN 
DIFFERERNT LINE -- REASIN IS IT IS DUE TO PRESSING ON ENTER
AFTER GIVNG FIRST AND SECOND INPUT.

IF WE REMOVE THE FIRST AND SECOND cout IT WILL GIVE INPUT
WITH SPACE BETWEEN THEM IT WILL ALSO WORK LIKE
    
    int x,y;
    cin >> x;
    cin >> y;
    cout << "Sum is : " << x+y << endl;

OUTPUT -- 3 5
          Sum is : 8

we can do this as well 
    cin >> x >> y;
*/
}