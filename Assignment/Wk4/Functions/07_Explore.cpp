#include<iostream>
using namespace std;

void Print(int num) {
    cout << "Printing an integer: " << num << endl;
}

/*  we cannot decalre like this 

    int Print(int num) {
    cout << "Printing an integer: " << num << endl;
    }

    ERROR: ambiguating new declaration of 'int Print(int)'
*/


void Print(double num) {
    cout << "Printing a double: " << num << endl;
}

void Print(int num1, double num2) {
    cout << "Printing an integer and a double: " << num1 << ", " << num2 << endl;
}

int main() {
    Print(5);
    Print(5.5);
    Print(5, 5.5);
    return 0;
}
