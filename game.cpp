#include <iostream>
#include <cstdlib>  // For rand() and srand() functions
#include <ctime>    // For time() function

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(0));

    int lowerBound = 1;
    int upperBound = 100;
    int numberToGuess = std::rand() % (upperBound - lowerBound + 1) + lowerBound;
    int numberOfTries = 0;
    int guess;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have selected a random number between " << lowerBound << " and " << upperBound << ". Try to guess it." << std::endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        numberOfTries++;

        if (guess < numberToGuess) {
            std::cout << "Too low. Try again." << std::endl;
        } else if (guess > numberToGuess) {
            std::cout << "Too high. Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the number (" << numberToGuess << ") in " << numberOfTries << " tries." << std::endl;
        }

    } while (guess != numberToGuess);

    return 0;
}
