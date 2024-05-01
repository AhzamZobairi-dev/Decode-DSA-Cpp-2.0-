//                               LEET CODE 1  -- BRUTE FORCE
/* Find the doublet in the array whose sum is equal to the given
   value x


    BRUTE FORCE
*/ 

#include <iostream>
#include <vector>

using namespace std;

/* Function -- total_brute
   Parameters: 1. A vector of integers
               2. An integer x(target)
   Return: None
   
   The number of times x occurs in the vector
   Issue -- it will return the number with repetition
            for e.g (a,b) and (b,a) both will be printed
*/
int total_brute(vector<int> &v, int x)
{
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] + v[j] == x)
            {
                count++;
            }
        }
    }
    return count;
}

/*  Function -- opt_brute
    Parameters: 1. A vector of integers
                2. Int x i.e target
    Return: None

*/
*/
void total_brute(vector<int> values,int target)
{
    for (int i = 0; i < values.size(); i++)
    {
        for (int j = 0; j < values.size(); j++)
        {
            if(i == j)  continue;
            if (values[i] + values[j] == target)
            {
                cout << "(" << i << "," << j << ") " ;
            }
        }
    }
    cout << endl;
}

void opt_brute(vector<int> values, int target)
{
    for(int i=0; i< values.size()-1; i++)
    {
        for(int j = i+1; j< values.size(); j++)
        {
            if(values[i] + values[j] == target)
            {
                cout << "(" << i << "," << j << ") " ;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int target;
    cout << "Enter the target sum : ";
    cin >> target;

    total_brute(arr, target);
    opt_brute(arr,target);
    return 0;
}
