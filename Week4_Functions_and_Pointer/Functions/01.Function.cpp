/* This is a basic function call being imitated where we are observing 
   how function is being called from main function
*/

#include <iostream>
using namespace std;

void greeting()
{
    cout << "Good Morning"<< endl;
    cout << "Have a nice day" << endl;
}

int main()
{
    greeting();
    greeting();
    greeting();

    return 0;
}