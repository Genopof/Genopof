#include <iostream>

int main() {
    int k;

    // Prompt user for input
    std::cout << "Enter a value for k: ";
    std::cin >> k;

    // Check if k is zero
    if (k == 0) {
        std::cout << "k cannot be zero. Please enter a non-zero value." << std::endl;
    } else {
        // Perform some operation (e.g., division)
        int result = 100 / k;
        std::cout << "100 divided by " << k << " is " << result << "." << std::endl;
    }

    return 0;
}
