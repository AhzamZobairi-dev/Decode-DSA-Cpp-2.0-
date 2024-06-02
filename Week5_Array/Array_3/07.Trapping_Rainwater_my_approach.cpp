/*          LeetCode -- 42. Trapping RainWater              HARD


*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int trap(vector<int> &height)
{
    int n = height.size();
    int max = height[0];
    
    int prev[n];
    prev[0] = -1;
    for(int i=1; i<n; i++)
    {
        prev[i] =  max;
        if(max < height[i])
            max = height[i];
    }

    max = height[n-1];   
    int next[n];
    next[n-1] = -1;
    for(int i=n-2; i>=0; i--)
    {
        next[i] =max;
        if(max<height[i])
            max = height[i];
    }

    for(int i=0; i<n; i++)
    {
        next[i] = min(next[i],prev[i]);
    }


    int water =0;
    for(int i=0; i<n; i++)
    {
        if(next[i]>height[i])
            water += (next[i]-height[i]);
    }

    return water;
}

int main()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int water = trap(arr);
    cout << "The amount of water trapped is : " << water << endl;
    return 0;
}