#include<bits/stdc++.h>         // includes all the header files
// #include<iostream>
// #include<cmath>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

// Already included in #include<iostream>
    cout << "Minumum is : " << min(a,b) << endl;
    cout << "Maximum is : " << max(a,b) << endl;

// reuqires   #include<cmath> header file
    cout << "Square root of first is : " << sqrt(a) << endl;    // needed to add cmath header file for sqrt 
    cout << "Square root of second is : " << sqrt(b) << endl;   // or we can add only one header file <bits/stdc++.h>

    return 0;
}