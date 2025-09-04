#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the sum of array elements
int sumArray(const vector<int>& arr) {
    int sum = 0;  // Initialize sum to 0

    // Loop through each element in the vector and add it to sum
    for (int val : arr) {
        sum += val;  // Add current element to sum
    }

    return sum;  // Return the final sum
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);  // Declare a vector of size n

    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Input array elements
    }

    // Call sumArray to calculate the sum and print the result
    int result = sumArray(arr);

    cout << result << endl;

    return 0;
}
