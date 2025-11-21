#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Player 1, enter a number between 1 and 1000:\n");
  int guess;
  scanf("%d", &guess);
  while (guess <= 0 || guess > 1000) {
    printf("That number is out of range.\n");
    printf("Player 1, enter a number between 1 and 1000:\n");
    scanf("%d", &guess);
  }
  int num_of_guesses = 10;
  while (num_of_guesses > 0) {
    if (num_of_guesses == 1)
      printf("Player 2, you have 1 guess remaining.\n");
    else
      printf("Player 2, you have %d guesses remaining.\n", num_of_guesses);
    printf("Enter your guess:\n");
    int new_guess;
    scanf("%d", &new_guess);
    while (new_guess <= 0 || new_guess > 1000) {
      printf("That number is out of range.\n");
      if (num_of_guesses == 1)
        printf("Player 2, you have 1 guess remaining.\n");
      else
        printf("Player 2, you have %d guesses remaining.\n", num_of_guesses);
      printf("Enter your guess:\n");
      scanf("%d", &new_guess);
    }
    if (new_guess == guess) {
      printf("Player 2 wins.");
      exit(0);
    }
    else if (new_guess > guess) 
      printf("Too high.\n");
    else if (new_guess < guess)
      printf("Too low.\n");
    num_of_guesses--;
  } 
  printf("Player 1 wins.\n");
  exit(0);
}
