#include <iostream>
using namespace std;

// Recursive function to calculate GCD
int gcd(int a, int b) {
    // Base case: when b is 0, return a
    if (b == 0) {
        return a;
    }
    
    // Recursive case: GCD of b and a % b
    return gcd(b, a % b);
}

int main() {
    int a, b;
    
    // Taking input from the user
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Output the GCD
    cout << gcd(a, b) << endl;
    
    return 0;
}
