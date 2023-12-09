/*
Ques : Take input percentage of a student and
print the Grade according to marks:
1) 91-100 Excellent
2) 81-90 very Good
3) 71-80 Good
4) 61-70 Can do better
5) 51-60 Average
6) 40-50 Below Average
7) <40 Fail

*/

#include <iostream>
using namespace std;

int main()
{   
    int a;
    cout << "Enter Marks : ";
    cin >> a;


// USING MULTIPLE IF CONDITION
    if(a>=91 && a<=100)             // without && all if-condition will be true
    {
        cout <<"Excellent";
    }
    if(a>=81 && a<=90)
    {
        cout <<"Very Good";
    }
    if(a>=71 && a<= 80)
    {
        cout <<"Good";
    }
    if(a>=61 && a<= 70)
    {
        cout <<"Can do better";
    }
    if(a>=51 && a<=60)
    {
        cout <<"Average";
    }
    if(a>=40 && a<=50)
    {
        cout <<"Below Average";
    }
    if(a<40)
    {
        cout <<"Fail";
    }


// USING NESTED IF ELSE LADDER -- BUT IT BECOMES VERY COMPLICATED

    if(a >= 91)
    {
        cout << "Excellent";
    }
    else
    {
        if(a >= 81)
        {
            cout << "Very Good";
        }
        else
        {
            if ( a >= 71)
            {
                cout << "Good";
            }
            else
            {
                if (a >= 61)
                {
                    cout << "Can do better";
                }
                else
                {
                    if (a >= 51)
                    {
                        cout << "Average";
                    }
                    else
                    {
                        if (a>=40)
                        {
                            cout << "Below Average";
                        }
                        else
                        {
                            cout << "FAil";
                        }
                        
                    }
                }
            }
        }
    }

/*
 USING ELSE-IF STATEMENT

 we can visualise the else-if as 
    if(conditon){
        //code1
    }
    else if(condition){
        //code2
    }
    else if(condiiton){
        //code3
    }
    else{
        //code4
    }

When the if condition is true the compiler will not check 
any further else-if conditon and executes //code1 and come
out of the if-else

lets say else-if of code3 is true, the compiler will not check
for other condition rather executes code3 and exits.
*/

    if(a>=91 )             
    {
        cout <<"Excellent";
    }
    else if(a>=81)
    {
        cout <<"Very Good";
    }
    else if(a>=71 )
    {
        cout <<"Good";
    }
    else if(a>=61 )
    {
        cout <<"Can do better";
    }
    else if(a>=51 )
    {
        cout <<"Average";
    }
    else if(a>=40 )
    {
        cout <<"Below Average";
    }
    else
    {
        cout <<"Fail";
    }
    return 0;                                                           
}



