
#include <iostream>
using namespace std;

int main()
{
    int x = 4, y =0,z;              // x=4, y=0
    while (x >= 0)                  // 4>=0       , 3>=0      , 2>=0
    {
        if(x==y)                    // (4==0)false,(3==1)false,(2==2)true
            break;                  //            ,           , break(out of loop)             
        else
            cout<< x <<" "<< y << endl;     //4 0,      3 1   ,          
    
        x--;                        // x =3, 2
        y++;                        // y =1, 2
    }

    return 0;
}

/*  expected output
4 0
3 1
*/