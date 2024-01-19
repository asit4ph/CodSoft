#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;

    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Guess the Number game!\n";

    do {
        // Ask the user for a guess
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        // Provide feedback on the guess
        if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        }

        attempts++;

    } while (guess != secretNumber);
 
    // Congratulate the user on guessing the correct number
    std::cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";

    return 0;
}