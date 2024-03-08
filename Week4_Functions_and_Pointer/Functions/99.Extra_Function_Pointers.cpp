#include <iostream>
using namespace std;

int calculate(int x, int y, int (*func)(int, int)) {
    int result = func(x, y);
    return result;
}
int add(int x, int y) {
    return x + y;
}
int subtract(int x, int y) {
    return x - y;
}
int main() {
    int a = 10, b = 5;  // pass the add function as a parameter to the calculate function
    int sum = calculate(a, b, add);
    cout << "Sum: " << sum << endl; // pass the subtract function as a parameter to the calculate function
    int difference = calculate(a, b, subtract);
    cout << "Difference: " << difference << endl;
    return 0;
}