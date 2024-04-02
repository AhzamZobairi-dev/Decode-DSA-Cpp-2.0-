// BETTER TO NOT GO IN DETAIL IN THIS PROGRAM. PASS BY REFERENCE USING ALIAS
// WILL USE IT WHEN DOING VECTORS 

#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;

    return ;
}

int main()
{
    int a,b;
    cin >> a >> b;

    swap(a,b);
    cout << a << " " << b << endl;
   
    return 0;
}