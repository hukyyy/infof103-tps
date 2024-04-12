#include <cstdlib>
#include <ctime>
#include <iostream>

int generateTarget() {
  int seed = std::time(0);
  std::srand(seed);
  return std::rand() % 101;
}

int main() {
  std::cout << "========== GUESSING GAME ============" << std::endl;
  std::cout << "Guess an integer between 0 and 100, I will tell you if your "
               "guess is above or below the target integer."
            << std::endl;
  std::cout << "You have 6 guesses left" << std::endl;

  int target = generateTarget();

  int attempts = 6;
  bool won = false;
  int guess;

  do {
    std::cout << "----" << std::endl;
    std::cout << "Enter a guess:" << std::endl;
    std::cin >> guess;

    if (guess == target) {
      won = true;
    } else {
      if (guess > target) {
        std::cout << "Too high!" << std::endl;
      } else {
        std::cout << "Too low!" << std::endl;
      }
      attempts--;
      std::cout << "You have " << attempts << " guesses left." << std::endl;
    }
  } while (attempts > 0 and not won);

  if (won) {
    std::cout << "You found the target!" << std::endl;
  } else {
    std::cout << "You ran out of guesses. Try again!" << std::endl;
  }

  return 0;
}