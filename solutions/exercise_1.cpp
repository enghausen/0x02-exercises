/* Implement a program that takes a positive integer as user input and returns the sum of all positive integers up to and including the given integer.
Use a while loop for calculating the sum.
Example of input/output:
Input: 5
Output: 15
Explanation: sum of integers from 1 to 5 is 1 + 2 + 3 + 4 + 5 = 15.*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input: ";
    cin >> n;

    if (n <= 0) {
        cout << "Input must be a positive integer." << endl;
        return 1;
    }

    int sum = 0;
    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }

    cout << "Output: " << sum << endl;

    return 0;
}