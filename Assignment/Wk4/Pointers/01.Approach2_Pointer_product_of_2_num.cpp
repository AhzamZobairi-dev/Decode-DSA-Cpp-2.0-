#include <iostream>
using namespace std;

int product(int & a, int & b){
    return a * b;
}
int main()
{
    int a,b,prod;
    
    cout << "Enter first number : ";
    cin >> a ;
    cout << "Enter second number : ";
    cin >> b ;

    prod = product(a,b);
    cout << "Product of " << a << " and " << b << " is " << prod << endl;
    return 0;
}