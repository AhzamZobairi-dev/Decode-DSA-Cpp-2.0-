// count the number of triplet

#include <iostream>
#include <vector>

using namespace std;

int triplet_count(vector<int> v, int target)
{
    int count = 0;
    int n = v.size();
    for(int i=0; i<n ; i++) {
        for(int j=i+1; j<n; j++) 
        {
            for(int k=j+1; k<n; k++) 
            {
                if(v[i]+v[j]+v[k] == target)
                    count++;
            }
        }
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;

    vector<int>  ele(n);
    for(int i = 0; i < n; i++)
        cin >> ele[i];
    
    int target;
    cout << "Enter target sum : ";
    cin >> target;
    
    int count = triplet_count(ele, target);
    cout << count ;
}