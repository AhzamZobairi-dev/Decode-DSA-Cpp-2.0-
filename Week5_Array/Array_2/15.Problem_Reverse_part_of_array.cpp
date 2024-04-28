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


void reverse(vector<int>& v, int i, int j) {
    while(i<j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}


int main(){
    int n;
    cout << "Enter the number of elements in array : "; 
    cin >> n;

    cout << "Enter the array : "; 
    vector<int> arr;
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    display(arr);

    int i,j;
    cout << "Enter two indices you want to reverse : ";
    cin >> i>> j;
    reverse(arr,i,j);
    display(arr);
}
