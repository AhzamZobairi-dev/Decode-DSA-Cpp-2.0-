#include<iostream>
using namespace std;

int main()
{

// Line 9 will be printed then Line 10 without any spaces Also we have now given any space 
//and new line after line10 we will be printing line 15 as conctinuation of line10
    cout<< "Hi I am Ahzam"; 
    cout<< "How are you";

//After printing line 14 we will have a new line due to '\n' -- ecape sequence but after 
//line14 there will be continuatuion as no new line is there
    cout<< "Hi I am Ahzam\n";
    cout<< "How are you";

//Similarly line 15 and 19 will be in continuation without spaces and after line 19 we 
//add anew line using "endl" 
    cout<< "Hi I am Ahzam";
    cout<<endl;
    cout<< "How are you";

//we can use endl at the end after << without requiring any new cout statement and \n
// in line 26 will add a new line after printing line26.
    cout<< "Hi I am Ahzam"<<endl;
    cout<< "How are you\n";

//We can use \n for new line
    cout<< " Line 29 -- Hi I am Ahzam\nHow are you\n";

//Simialrly we can print a new statement by just adding satement in "____" after << 
//and then endl after << as well.

// We use endl in cpp instead on /n
    cout<< " line 33 Hi I am Ahzam"<<endl<< "How are you"<< endl;       

    return 0;
}

/*
OUTPUT

Hi I am AhzamHow are youHi I am Ahzam
How are youHi I am Ahzam
How are youHi I am Ahzam
How are you
 Line 29 -- Hi I am Ahzam
How are you
 line 33 Hi I am Ahzam
How are you

*/