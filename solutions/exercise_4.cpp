/* This assignment is concerned with simulating a die roll
First of all, we should investigate how to make random values in C++
Ask ChatGPT!!
Now make the program ask the user for number of die throws
Next make a vector<int> and load as many throws as the user prescribed.
Now calculate the mean of die values and print it
Make the mean calculation into a function */
#include <iostream>
#include <vector>
#include <random>
#include <ctime>
using namespace std;

double mean(const vector<int>& throws, int n) {
    double sum = 0;
    int i = 0;
    while (i < n) {
        sum += throws[i];
        i++;
    }

    return sum / n;
}

int main() {
    int n;
    cout << "Input number of die throws: ";
    cin >> n;

    if (n <= 0) {
        cout << "Input must be a positive integer." << endl;
        return 1;
    }

    vector<int> throws;
    srand(time(0));
    int count = 0;
    while (count < n) {
        throws.push_back(rand() % 6 + 1);
        count++;
    }

    cout << "Mean of die values: " << mean (throws, n) << endl;

}