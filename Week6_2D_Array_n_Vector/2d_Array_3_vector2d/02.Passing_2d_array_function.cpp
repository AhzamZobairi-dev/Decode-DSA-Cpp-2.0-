#include <iostream>
#include <vector>

using namespace std;

void change(int a[])
{
    a[0] = 100;
}

/**
 * Changes the first element of a 2D array to 50.
 *
 * @param a A 2D array with a fixed column size of 3. The first element of this array will be modified.
 */
void change_2d(int a[][3])  // we need to specify the columns or it will be an error
{
    a[0][0] = 50;
}

/**
 * @brief The main function demonstrating the use of 1D and 2D arrays.
 * 
 * This function initializes a 1D array and a 2D array, prints their initial values,
 * calls functions to modify them, and then prints the modified values.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main()
{
    // Declaring and assigning a 1D array
    int a[3] = {1, 2, 3};
    cout << a[0] << endl; // Output the first element of the 1D array
    change(a);            // Passing the array to a function to change index 0
    cout << a[0] << endl; // Output the modified first element of the 1D array

    // Creating a 2D array
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << arr[0][0] << endl; // Output the first element of the 2D array
    change_2d(arr);            // Passing the 2D array to a function to change its elements
    cout << arr[0][0] << endl; // Output the modified first element of the 2D array

    return 0;
}