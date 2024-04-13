#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in Array : ";
    cin>>n;

    int a[n];
    cout << "Enter the elements of Array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int x;
    cout << "Enter the number you want to search in Array : ";
    cin>>x; 

    bool flag = true;
/*  We can write below code as alternative

    bool flag = false;
    for(int i=0;i<n;i++)
    {   
        if(a[i] == x)   flag = true;
           
    }
    if(flag == true)    cout<< x <<" is present 
                        in the Array at index : " << i <<endl;    
    else    cout << "Not Present "<<endl;

*/
    for(int i=0;i<n;i++)
    {   
        if(a[i] == x)
        {
            cout<< x <<" is present in Array at index : " << i <<endl;
            flag = false;
            break;
        }
    }
    if(flag)    cout << "Not Present "<<endl;
    return 0;
}