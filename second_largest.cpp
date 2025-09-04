#include <iostream>
#include <vector>
#include <climits>  // For INT_MIN

using namespace std;

// Function to find the second largest element
int secondLargest(const vector<int>& arr) {
    int n = arr.size();

    // Initialize largest and second with the smallest possible integer
    int largest = INT_MIN;
    int second = INT_MIN;

    // Traverse the array
    for (int val : arr) {
        if (val > largest) {
            // Update second before largest
            second = largest;
            largest = val;
        } else if (val > second && val != largest) {
            second = val;
        }
    }

    // If second is still INT_MIN, it means there was no valid second largest element
    return (second == INT_MIN) ? -1 : second;
}

int main() {
    int n;
    cin >> n;
    
     if (n <= 2) {
        cout << -1 << endl;  // Print -1 and exit immediately
        return 0;
    }


    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = secondLargest(arr);

    if (result != -1){
        cout << result << endl;
    }

    return 0;
}
