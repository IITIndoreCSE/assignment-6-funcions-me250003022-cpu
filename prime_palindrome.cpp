#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }            
    if (n == 2) {
        return true;
    } 
     if (n % 2 == 0) {
        return false;
    }

    // Check for divisibility from 3 to sqrt(n), skipping even numbers
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
     return true;  // n is prime    // TODO: complete the function as per instructions

}

bool isPalindrome(int n) {
    int original = n;  // Store the original number
    int reversed = 0;

    // Reverse the digits of the number
    while (n > 0) {
        int digit = n % 10;  // Extract the last digit
        reversed = reversed * 10 + digit;  // Build the reversed number
        n /= 10;  // Remove the last digit
    }

    // Compare the reversed number with the original number
    return original == reversed;    // TODO: complete the function as per instructions    // TODO: complete the function as per instructions
    
}

bool primePalindrome(int n) {
    return isPrime(n) && isPalindrome(n);  // Return true if both checks pass    
}
    
int main() {
    int n; cin >> n;
    cout << (primePalindrome(n) ? 1 : 0) << "\n";
    return 0;
}

