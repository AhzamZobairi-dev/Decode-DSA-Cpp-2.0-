/*          LeetCode -- 42. Trapping RainWater              HARD

Here we have made 2 different arrays apart from the main array 
height[ ] = [0,1,0,2,1,0,1,3,2,1,2,1]

1. prev[ ] -- it contains previous greatest element of the array 
    prev[ ] -- [-1,0,1,1,2,2,2,2,3,3,3,3]

2. next[ ] -- it contains the next greatest element of the array
    next[ ]  -- [3,3,3,3,3,3,3,2,2,2,1,-1]

Instead of creating an another array We can compare next[ ] and prev[ ] and store it in next [ ] 

 next[ ] --  min(prev[i], next[i])
   next[ ] -- [-1,0,1,1,2,2,2,2,2,2,1,-1]

now when next[i] > height[i]. then, we can next[i] - height[i] and this the trapped water.

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

/*   We can merge the next two for-loop together
    -- find minimum and trapped water in single statement
*/
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
        cin >> arr[i];

    int water = trap(arr);
    cout << "The amount of water trapped is : " << water << endl;
    return 0;
}