//  Write a program to store 10 at every index of a 2D array(matrix) with 5 rows and 5 columns.

//  Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.

#include <iostream>
#include <vector>

using namespace std;
int main() 
{
    vector<vector<int>> matrix(5, vector<int>(5)); 
    // Initialize the matrix with 10 at every index
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matrix[i][j] = 10;
        }
    }

    // Print the matrix
    cout << "Matrix from cpp file :" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}