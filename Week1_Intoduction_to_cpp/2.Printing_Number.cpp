#include<iostream>
using namespace std;

int main()
{

   cout<<"4"<<endl;       // op- 4 
   
   cout<<4<<endl;         // op- 4

   cout<<4+3<<endl;       // op- 7

   cout<<"4+3"<<endl ;    // op- 4+3

/*
Anything place in "___" is a string/text according to computer
and has no numeric value like
     cout<<"4+3" 
     cout<<"4"
Here both are printed as it is mentioned in "" but will not 
be any arithmetic opration on it as it has no value.

Meanwhile
    cout<<4+3;
    cout<<4;
these are teated as number and arithmentic works
*/   

    return 0;
}

/*
Output

4
4
7
4+3

*/