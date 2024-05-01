#include <iostream>
#include <vector>

using namespace std;

void op(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
        {
        cout << v[i] << " ";
        }
    cout << endl;
}


int main()
{
    int n;
    cout << "Enter the number of elements in array : "; 
    cin >> n;
    vector<int> v(n);
    cout << "Enter the array : "; 
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    op(v);
    
    int i=0, j= n-1;
    for(i,j; i<j; ){
        if(v[i]>0) i++;
        else if(v[j]<0) j--;
        else if(v[j]>0 && v[i]<0 ) {
        int temp= v[i];
        v[i]=v[j];
        v[j] = temp;
        }
    }
    op(v);

}