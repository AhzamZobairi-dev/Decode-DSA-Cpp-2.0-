#include <iostream>
using namespace std;

int main()
{
// this code will print number from 1 to 10   
    cout <<  endl << "while j is 1" << endl ;
    int j=1;              
    while (j <=10)      
    {
        cout << j << endl;
        j++ ;
    }
// since j is 11 and condtion is false the while will not run
    cout <<  endl << "While j is 11" << endl ;
    j=11;              
    while (j <=10)      
    {
        cout << j << endl;
        j++ ;
    }

//DO WHILE LOOP
    cout <<  endl << "Do while loop with j as 1" << endl ;
    j = 11;
    do 
    {
        cout << j << endl;
        j++;
    } while (j <= 10);
/*
do while loop will run once and the inside while condition is checked, and the condition will become false 
the loop exits
*/  
    

    return 0;
}