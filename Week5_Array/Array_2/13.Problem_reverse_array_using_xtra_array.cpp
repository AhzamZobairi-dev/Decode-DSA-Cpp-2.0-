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

    vector<int> duplicate;
    for(int i = 0; i < n; i++)
    {
        duplicate.push_back(arr[n-1-i]);       // only when     vector<int> duplicate;
    /*  or ==> duplicate[i] = arr[n-1-i]; when vector is defined as  
            
            vector<int> duplicate(arr.size());
            vector<int> duplicate(n);
    */
    }
    cout << endl;

    for(int i = 0; i < n; i++)
    {
        cout << duplicate[i] << " ";
    }
    cout << endl;

    return 0;

}