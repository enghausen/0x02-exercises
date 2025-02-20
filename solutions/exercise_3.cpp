/* Write a program that takes a positive integer as input and prints a triangle of asterisks (*), where the height of the triangle is the input number.
Use a while loop for iteration corresponding to each row and a while loop for each row.
Example of input/output:
Input: 4
Output:
   *
  ***
 *****
******* */
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

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n - i) {
            cout << " ";
            j++;
        }

        j = 1;
        while (j <= 2 * i - 1) {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}