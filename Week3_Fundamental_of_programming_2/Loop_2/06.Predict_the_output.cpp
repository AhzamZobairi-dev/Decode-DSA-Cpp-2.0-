
#include <iostream>
using namespace std;

int main()
{
    int x = 4, y =0,z;
    while (x >= 0)                  // 4 >=0, 3>=0, 2>=0, 1>=0, 0>=0, -1 >=0 false
    {
        x--;                        // x =3, 2, 1, 0, -1
        y++;                        // y =1, 2, 3, 4, 5
        if(x==y)                    // (3==1)false,(2==2)true,(1==3)false,(0==4)false,(-1==5)
            continue;               //             , continue,           ,           ,       
        else
            cout<< x <<" "<< y << endl;     //3 1,          ,1 3        ,   0 4     , -1 5
    }

    return 0;
}

/*  expected output
3 1
1 3
0 4
-1 5

*/