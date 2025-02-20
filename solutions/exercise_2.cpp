/* Write a program that takes an integer as user input and prints all even integers up to and maybe including the given integer input.
Use a while loop for iterating the integers.
Consideration: What should happen if the integer is negative?
Example input/output:
Input: 10
Output: 2 4 6 8 10 */
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input: ";
    cin >> n;

    if (n < 0) {
        cout << "Input must be a non-negative integer." << endl;
        return 1;
    }

    int i = 2;
    while (i <= n) {
        cout << i << " ";
        i += 2;
    }

    cout << endl;

    return 0;
}