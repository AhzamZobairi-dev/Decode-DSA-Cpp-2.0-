#include <iostream>
#include <vector>
using namespace std;

void op(vector<int> v) 
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

}

vector<int> merge(vector<int> num1, vector<int> num2)
{
    cout << "Ahzam: " << __LINE__ << endl;
    int i = num1.size()-1;
    int j = num2.size()-1;

// incorrect initialization till we add 2 i.e v(i+j+2) or we can declare v directly with
// vector<int> v(num1.size() + num2.size);    
    vector<int> v(num1.size() + num2.size());     
    int k = i+j+1;
    
    while(i>=0 && j>=0)
    {
        if(num1[i] < num2[j])
        {
            v[k] = num2[j];
            j--;
        }
        else
        {
            v[k] = num1[i];
            i--;
        }
        k--;
    }

    if(i<0)
    {
        while(j>=0)
        {
            v[k]= num2[j];
            j--;
            k--;
        }
    }

    if(j<0)
    {
        while(i>=0)
        {
            v[k]= num1[i];
            i--;
            k--;
        }
    }

    return v;
}
int main()
{
    int n1;
    cout << "Enter size of first array : ";
    cin >> n1;
    vector<int> v1(n1);
    cout << "Enter the first array : ";
    for(int i = 0; i < n1; i++)
    {
        cin >> v1[i];
    }

    int n2;
    cout << "Enter size of second array : ";
    cin >> n2;
    vector<int> v2(n2);
    cout << "Enter the second array : ";
    for(int i=0; i < n2; i++)
    {
        cin >> v2[i];
    }

    op(v1);
    op(v2);
    vector<int> v = merge(v1, v2);
    op(v);
    return 0;
}