// Ques : Print the sum of this series : 1 -2 + 3 - 4 + 5 - 6... upto an'.


#include <iostream>
using namespace std;

int main()
{
    int n, sum =0 ;
    cout << "Enter a number of term : ";
    cin >> n;

//Method 1 -- an in-efficient method
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)  sum += i;
        else        sum -= i;
    }
    cout << "Sum is : " << sum << endl;

/*METHOD 2
let observe the series      1 -2 + 3 - 4 + 5 - 6 ......

let us say when n is even
                        (1-2)+(3-4)+(5-6)+ ........ +((n-1)-n)
                          -1    -1    -1                -1          n/2 times -1
                n is odd
                        (1-2)+(3-4)+(5-6)+ ........ +(n)
                          -1    -1    -1            +(n)          (n/2) times -1 or we can say ((n-1)/2) + n
                                                                    7/2 =3       or        6/2=3
*/  
    if(n%2==0)      cout << -(n/2);
    else            cout << n-(n/2);
    return 0;
}