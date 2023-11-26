/* 
In the code below we can find the area of circle but 
we need to change parameter inside code and ultimately 
we are changing code not taking any input.

User Input -- when code run we are asked to input a value
              that is user input i.e we can give input at 
              same place as where we are seeing output 
              i.e TERMINAL -- it is also called input & 
              output screen 
  
int main()
{    float rad = 8;
    float pi = 3.1415;
    float Area;
    Area = pi*rad*rad;
    cout << Area << endl;
}   
*/ 

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;       //ask input from user & place the value in x
    cout << x;
    return 0;
}