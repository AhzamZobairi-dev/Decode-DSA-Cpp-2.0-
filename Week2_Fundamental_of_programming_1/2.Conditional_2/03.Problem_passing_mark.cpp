/*
Ques : Given the marks of the student. If the marks
are greater than 33 print the result as pass
otherwise fail without using if-else statement.
*/

#include <iostream>
using namespace std;

int main() 
{
    int marks;
    cout << "Enter marks : ";
    cin >> marks;

    (marks > 33) ? cout << "Pass" : cout << "Fail" ;
    return 0;
}