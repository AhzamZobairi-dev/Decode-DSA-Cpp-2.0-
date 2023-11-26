/*
Each character have a ASCII value mapped to it 
for ex --

    'A' = 65        'a' = 97            '0' = 48
    'B' = 66        'b' = 98            '1' = 49
    'C' = 67        'c' = 99            '2' = 50
    .
    .
    .
    .
    'Z'= 'A'+25     'z' = 'a'+25        '9' = '0'+9
    'Z' = 90        'z' = 122           '9' = 57 
*/

/*      TYPECASTING
To interchange value from one data type to other is typecasting
*/


#include <iostream>
using namespace std;

int main()
{
    char ch = 'a';
    char ch1 = 'A';
    char ch2 = '0';
    cout << (int)ch << endl;
    cout << (int)ch1 << endl; // type casting char to int
    cout << (int)ch2 << endl;
    
    float x = 7.1;
    int y = x;              // technically this works but not correct
    cout << y << endl;   

    int z;
    z = (int)x;             // this is correct. 
    cout << z << endl;

    bool flag = false;
    cout << flag+9 << endl;     // automactic conversion
    flag = true;
    cout << flag+9 << endl;     // automactic conversion

    int k = (int)flag;
    cout << k << endl;          //correct way but needed in bool 


//MAJOR TYPECASTING
    char l = 'A';
    int m = int(l);            // tyecasting and 65 stored in m 
    cout << m << endl; 

// In Cpp some typecastingg are done automactically like
    cout << l+100 << endl;      // compiler typecasts l automatically as there is an 
                                // arithmetic opearation done on which requires two int 

    return 0;
}

/*
OUTPUT
97
65
48
7
7
9
10
1
65
165
*/