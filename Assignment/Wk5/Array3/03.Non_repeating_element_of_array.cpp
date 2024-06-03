// Find the first non-repeating element in the array .

#include <iostream>
#include <vector>
using namespace std;

void nonRepeatingElement(vector<int> elements)
{
    bool flag = false;           // All the elements are repeated, no unique elements  
    int n = elements.size();
    for(int i=0; i<n; i++) 
    {   
        int j=0;
        for(j; j<n; j++)
        {
            if( i!=j && elements[i] == elements[j])
                break;
        }
        if(j == n)
        {
            flag = true;
            cout << "First Non-repeating Element is: " << elements[i] << endl;
            return;
        }
    }
    if(flag == false)  
        cout << "There are no non-repeating elements";
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Enter the elements of the array: ";
    for(int i =0; i<n; i++)
        cin >> vec[i];

    nonRepeatingElement(vec);

    return 0;
}