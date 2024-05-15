#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(time(0));
  int number = rand() % 100 + 1; 
  int guess;

  cout << "Welcome to the number guessing game!" << endl;
  cout << "Guess a number from 1 to 100:" << endl;

  while (true) {
    cout << "Enter number you have guessed: ";
    cin >> guess;

    if (guess < number) {
      cout << "Your guessed number is too low. Please try again!" << endl;
    } else if (guess > number) {
      cout << "Your guessed number is too high. Please again!" << endl;
    } else {
      cout << "Congratulations! You guessed the number: " << number << endl;
      break;
    }
  }

  return 0;
}
