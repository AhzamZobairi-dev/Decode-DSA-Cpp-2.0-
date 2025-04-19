//              LEETCODE 189. Rotate Array
//  ROTATE THE ARRAY TOWARDS RIGHT BY K STEPS

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

void reverse(vector<int>& v, int i, int j)
{
    while(i<j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++; j--;
    }
}


int main(){
    int n;
    cout << "Enter the number of elements in array : "; 
    cin >> n;

    cout << "Enter the array : "; 
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the step by which we have to rotate the array towards right : ";
    cin >> k;
    display(arr);

    reverse(arr,0,n-1-k);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);
    display(arr);
    return 0;
}