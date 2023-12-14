#include<iostream>
using namespace std;

int main() 
{
    int k = 35;
    cout << (k == 35) << endl << (k == 50) << endl << (k > 40);

// IMP
    cout << (k == 35) << endl << (k = 50) << endl << (k > 40); // OP will be 1 then k =50 assigns the k to value 50
                                                               // then compares with 40 which is true    
    return 0;
}

/*  PPREDICTION
            (k == 35 ) => (35 == 35 ) => 1 (true)
            (k == 50 ) => (35 == 50 ) => 0 (false)
            (k > 40)   => (35 > 40 )  => 0 (false)

OUTPUT
1
0
0
*/