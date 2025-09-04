#include <iostream>
#include <vector>
using namespace std;

// Function to calculate product of elements except the current index
vector<int> productExceptIndex(const vector<int>& arr) {
    int n = arr.size();
    vector<int> output(n, 1);  // Initialize the output vector with 1s

    // Step 1: Calculate the product of elements to the left of each index
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        output[i] = prefix;  // Store the prefix product for the current index
        prefix *= arr[i];    // Update the prefix product for the next index
    }

    // Step 2: Calculate the product of elements to the right of each index
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        output[i] *= suffix;  // Multiply the current output by the suffix product
        suffix *= arr[i];     // Update the suffix product for the next index
    }

    return output;  // Return the final output array
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = productExceptIndex(arr);

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
