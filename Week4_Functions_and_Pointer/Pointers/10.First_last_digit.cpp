#include <iostream>
using namespace std;

void find(int n, int *first, int *last)
{
    *last = n%10;
    while(n > 9)
    {
        n = n / 10;
    }
    *first = n ;
    return;
}
void number(int *value)
{
    int ld= (*value)%10;
    int fd;
    while(*value > 0)
    {
         fd = *value % 10;
         *value = (*value)/10;
    }
    cout << fd << " " << ld << endl;

    return;
}
/* better approach will be to use value it self instead of using new variable fd

CODE
    while(*value > 9)
    {
        *value = value / 10;
    }

}
*/
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int firstDigit, lastDigit;
    int *ptr1 =&firstDigit;
    int *ptr2 =&lastDigit;

    find(n, ptr1, ptr2);
    cout << *ptr1 << " " << *ptr2 << endl;


    number(&n);     // it is called second as it manipulates the original value 
                    // stored in the variable n via a pointer value
    return 0;
}