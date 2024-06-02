/*          LeetCode -- 42. Trapping RainWater              HARD


*/

#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int> &height)
{
    int left = 0, right = height.size() - 1;
    int left_max = 0, right_max = 0;
    int water = 0;
    while (left < right)
    {
        if (height[left] < height[right])
        {
            if (height[left] >= left_max)
            {
                left_max = height[left];
            }
            else
            {
                water += left_max - height[left];
            }
            left++;
        }
        else
        {
            if (height[right] >= right_max)
            {
                right_max = height[right];
            }
            else
            {
                water += right_max - height[right];
            }
            right--;
        }
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