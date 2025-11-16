# 🎯 Number Guessing Game

A simple C++ console game where the player tries to guess a randomly generated number between 1 and 100. The game provides hints to guide the player and counts the number of attempts.

## 💡 Features
- Generates a random number between 1 and 100  
- Prompts the user for guesses until the correct number is found  
- Gives hints: "Try a smaller number" or "Try a larger number"  
- Tracks the number of attempts  
- Beginner-friendly C++ code  

## 🧠 Example Output
Welcome! I picked a number between 1 and 100. Try to guess it!
Your guess: 50
Try a smaller number.
Your guess: 25
Try a larger number.
Your guess: 37
Congratulations! You guessed it in 3 attempts!


## ⚙️ How to Run
1. Clone or download this project:  
   `git clone https://github.com/yourusername/number-guessing-game.git`
2. Open a terminal in the project directory.  
3. Compile the program:  
   `g++ main.cpp -o NumberGuess`
4. Run it:  
   `./NumberGuess   # Linux / Mac`  
   `NumberGuess.exe  # Windows`

## 🧩 Code Overview
- **Random Number Generation** -> Uses `rand()` seeded with `time(0)`  
- **Input Section** -> Prompts the user for guesses  
- **Logic & Hints** -> Compares guess to target and prints hints  
- **Output Section** -> Prints congratulations message when guessed correctly  

## 🧑‍💻 Author
**wdemirkoll**  
[@wdemirkoll](https://github.com/wdemirkoll)  
Created: November 2025  

⭐ If you like this project, consider giving it a star!  
