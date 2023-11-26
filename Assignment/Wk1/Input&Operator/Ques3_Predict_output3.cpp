/* Find the output for this code. Let input:- 2 3

#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    x+=y;
    x-=y;
    x%=y;
    cout<<x;
}


Soultion 

1. Dry Run
    - declared two variable x and y
    - asked user for input a value for x and y respectively
    - the we will do these calculation
        x += y  i.e x = 2+3 => x = 5 & y = 3
        x -= y  i.e x = 5-3 => x = 2 & y = 3
        x %= y  i.e x = 2%3 => x = 2 & y = 3
    - then printing x i.e 2

2. Output

2
*/

#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    x+=y;
    x-=y;
    x%=y;
    cout<<x;
}