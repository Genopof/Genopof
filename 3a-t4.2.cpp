#include <iostream>
#include <limits> // For std::numeric_limits

int main() {
    int number;

    while (true) { // Loop until valid input is received
        std::cout << "Please enter an integer: ";
        std::cin >> number;

        // Check if the input failed (not an integer)
        if (std::cin.fail()) {
            std::cout << "Warning: That's not an integer. Please try again." << std::endl;

            // Clear the error state
            std::cin.clear();
            
            // Ignore the rest of the input line
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            // Input is valid, break out of the loop
            break;
        }
    }

    std::cout << "You entered the integer: " << number << std::endl;
    return 0;
}
