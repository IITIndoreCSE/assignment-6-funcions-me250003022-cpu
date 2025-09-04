#include <iostream>
#include <cmath>  // For sqrt() function
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    // If n is less than 2, it's not prime
    if (n < 2) {
        return false;
    }

    // 2 is the only even prime number
    if (n == 2) {
        return true;
    }

    // If n is even and greater than 2, it's not prime
    if (n % 2 == 0) {
        return false;
    }

    // Check for divisibility from 3 to sqrt(n), skipping even numbers
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;  // n is prime
}

// Function to check if a number is a palindrome
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
    return original == reversed;
}

// Function to check if a number is both prime and palindrome
bool primePalindrome(int n) {
    return isPrime(n) && isPalindrome(n);  // Return true if both checks pass
}

int main() {
    int n;
    cin >> n;

    // Check if the number is both prime and a palindrome
    if (primePalindrome(n)) {
        cout << "1" << endl;  // Print 1 if both conditions are met
    } else {
        cout << "0" << endl;  // Print 0 if either condition fails
    }

    return 0;
}
