/*                    Leect Code -- 31. Next Permutation            -- Medium

    https://leetcode.com/problems/next-permutation/description/
*/          

#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& nums, int i, int j)
{
    while(i<j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
}

void nextPermutation(vector<int>& v)
{
    int idx = -1;
    int n = v.size();
    for(int i = n-2; i >= 0; i--)       // finding the pivot
    {
        if(v[i]<v[i+1])
        {
            idx = i;
            break;
        }
    }

    if(idx == -1 )  // if pivot is not found
    {
        reverse(v, 0, n-1);
        return;
    }

    reverse(v, idx+1, n-1);     // calling reverse that will reverse the elements

    int j =-1;
    for(int i = idx+1; i < n; i++)
    {
        if(v[idx]<v[i])
            j = i;
    }

    swap(v[idx], v[j]);
    
}

int main()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;

    vector<int> seq(n);
    cout << "Enter the Squence whose next permutation you want : ";

    for(int i = 0; i < n; i++)
        cin >> seq[i];

    nextPermutation(seq);

    for(int i = 0; i < n; i++)
        cout << seq[i] << " ";

    return 0;
}