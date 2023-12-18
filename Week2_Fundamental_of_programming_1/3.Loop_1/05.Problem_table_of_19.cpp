// Ques : Print the table of 19.


#include <iostream>
using namespace std;
int main() 
{

// Worst Method
    cout << "Method 1" << endl;
    for (int i = 19; i <= 190; i++)        
    {
        if(i%19==0) cout << i << endl;
    }

    cout << "Method 2" << endl;
    for (int i = 19; i <= 190; i+=19)        
    {
        cout << i << endl;
    }

    cout << "Method 3" << endl;
    for (int i = 1; i <= 10; i++)        
    {
        cout << i * 19 << endl;
    }

   

    
    return 0;
}