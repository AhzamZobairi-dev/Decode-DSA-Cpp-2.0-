// Ques: Print 10 using 2 positive numbers less than 6  in C++ as output.


#include <iostream>

using namespace std;

int main()
{
    //We can use any two number which is < 6 
    int a = 5, b = 5;

    //method 1
    cout << a + b << endl;

    //method 2
    int sum = a + b;
    cout << sum << endl;

    return 0;
}