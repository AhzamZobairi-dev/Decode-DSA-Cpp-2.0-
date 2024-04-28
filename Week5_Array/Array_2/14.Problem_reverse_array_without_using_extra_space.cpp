/*                      FIRST APPROACH

--> myApproach() -- will iterate loop till n/2 and use basic math as used in 
                    question reversing array using extra array.          


                        TWO POINTER METHODS
will use two methods using while and for loop respectively.

 */                                                


#include <iostream>
#include <vector>
using namespace std;    

void display(vector<int> points)
{
    for(int i = 0; i < points.size(); i++)
    {
        cout << points[i] << " ";
    }
    cout << endl;
}

// My Approach -- passing value instead of reference, so preserve array for other approaches
void myApproach(vector<int> v)          
{
    cout << "This is my approach : "  ;
    int n = v.size();
    for(int i=0; i<n/2 ; i++)
    {
        int temp = v[i];
        v[i] = v[n-1-i];
        v[n-1-i] = temp;
    }
    display(v);
}

// passing by value
void reverseWhile(vector<int> v)
{
    cout <<  "This is my reverseWhile : "  ;
    int i=0,j=v.size()-1;
    while(i<j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    display(v);
}

// Pass by reference
void reverseFor(vector<int>& v){
    cout <<  "This is my reverseFor : "  ;
    for(int i=0, j=v.size()-1; i<j; )
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements in array : "; 
    cin >> n;

    cout << "Enter the array : "; 
    vector<int> arr;
    
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << "The array is : ";
    display(arr);

    myApproach(arr);
    reverseWhile(arr);
    reverseFor(arr);
    
    display(arr);
    return 0;

}