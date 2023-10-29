#include<iostream>

using namespace std;

int main()
{
    int x;          // Create a container x that can store integer
    x = 7;            // Place 7 in that container x

    cout<<x<<endl;  //Print what is in x i.e 7 and endl

//WHY WE NEED IT?
//We need variable so that we can manipulate the variable.

    x = 9;         //remove 7 from x and update with 9
    cout<<x<<endl; // print will be 9

    x = 13;        // update x with 13
    x = 15;        // the again update it with 15 
    cout<<x<<endl; // 15 will be printed as stored in x latest  

//Declaring and assigning in one line
    int y = 25;     // make a container y and put 25 in it
    cout<<y<<endl;  // Print the value in y and endl

    y = y + 10;     // do y+10 in RHS and assign it to LHS y
                    // i.e y=25+10 => y =35
    cout<<y<<endl;  // print updated y


//Short form of the arithmetic operator of variable
//      y = y + a   =>      y += a
//      y = y - a   =>      y -= a
//      y = y * a   =>      y *= a
//      y = y / a   =>      y /= a

    y /= 5;         // y = y/5 so 35/5 and result is updated in y
    cout<<y<<endl;

    return 0;
}

/*
OUTPUT

7
9
15
25
35
7

*/