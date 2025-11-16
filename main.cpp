#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    // This ensures that we get different random numbers each time the program runs.
    srand(time(0)); // Random number generation

    // rand() % 100 gives a number from 0 to 99; adding 1 shifts it to 1–100.
    int target = rand() % 100 + 1; // Random number between 1 and 100
    int guess; // Variable to store the user's guess
    int attempts = 0; // Counter to track how many guesses the user has made

    // Explaining the game objective
    std::cout << "Welcome, I picked a number between 1 and 100. Try to guess!" << std::endl;

     do {
        std::cout << "Your guess: "; // Prompt user for input
        std::cin >> guess; // Read the user's guess

        attempts++; // Increase attempt counter every time the player guesses

        // If the user's guess is higher than the target number,
        // the program gives a hint to guess a smaller number.
        if (guess > target){
            std::cout << "Try a smaller number" << std::endl;
        }

        // If the user's guess is lower than the target,
        // the program suggests guessing a larger number.
        else if (guess < target){
            std::cout << "Try a larger number" << std::endl;
        }

        // If neither condition above is true, the user guessed correctly.
        else{
            std::cout << "Congratulations! You guessed it in " << attempts << " attempts!" << std::endl;
        }

   } while (guess != target);
     // The loop continues until the guessed number matches the target number.
     // When guess == target, the loop ends.

  return 0;
}
