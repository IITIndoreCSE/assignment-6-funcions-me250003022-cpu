#include <iostream>
#include <vector>
#include <climits>  // For INT_MIN

using namespace std;

// Function to find the second largest element
int secondLargest(const vector<int>& arr) {
    int largest = INT_MIN;
    int second = INT_MIN;

    // Traverse the array to find the largest and second largest elements
    for (int val : arr) {
        if (val > largest) {
            second = largest;  // Update second to previous largest
            largest = val;     // Update largest to current element
        } else if (val > second && val != largest) {
            second = val;  // Update second largest
        }
    }

    // If second is still INT_MIN, there is no valid second largest element
    return (second == INT_MIN) ? -1 : second;
}

int main() {
    int n;
    cin >> n;

    // Handle case where n <= 2 immediately in main function
    if (n <= 2) {
        cout << -1 << endl;  // Print -1 and exit immediately if size is 2 or less
        return 0;
    }

    vector<int> arr(n);  // Declare vector of size n
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Input array elements
    }

    int result = secondLargest(arr);

    // Output the second largest element
    if (result == -1) {
        cout << -1 << endl;  // Output -1 if no second largest element is found
    } else {
        cout << result << endl;
    }

    return 0;
}
