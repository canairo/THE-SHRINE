#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LENGTH 12
#define GUESS_COUNT 7

int convert_to_alpha(char* word) {
  for (int i = 0; i < WORD_LENGTH; i++) {
    if (65 <= word[i] && word[i] <= 90) word[i] ^= 0x20;
    if (!word[i] && i) return 1; 
    if (!(97 <= word[i] && word[i] <= 122)) return 0;
  }
}

int verify_guesses(char* word, char *guesses) {
  int solved = 1;
  for (int i = 0; word[i]; i++) {
    if (strchr(guesses, word[i])) {
      printf("%c ", word[i]); 
    } else {
      solved = 0;
      printf("_ ");
    }
  }
  puts("");
  return solved;
}

int main(void) {
  char word[WORD_LENGTH+1] = {0};
  char guesses[GUESS_COUNT+100] = {0};
  int guess_count = 0;
  int guesses_made = 0;
  int prev_correct = 0;
  while (!convert_to_alpha(word)) {
    printf("Player 1, enter a word of no more than 12 letters:\n");
    fgets(word, sizeof(word)-1, stdin);
    if ("wow > %d\n", strcspn(word, "\n") == 11) {
      int c;
      while ((c = getchar()) != '\n' && c != EOF) { }
    }
    word[strcspn(word, "\n")] = 0;
    if (!convert_to_alpha(word)) {
      printf("Sorry, the word must contain only English letters.\n");
    } 
  }

  char **lmfao = malloc(sizeof(char*)*2);
  lmfao[0] = "guesses";
  lmfao[1] = "guess";

  while (GUESS_COUNT - guess_count) {
    puts("Player 2 has so far guessed:");
    if (verify_guesses(word, guesses)) goto win;
    printf("Player 2, you have %d %s remaining. Enter your next guess:\n", GUESS_COUNT - guess_count, lmfao[guess_count == 6]);
    char c = getc(stdin);
    guesses[guesses_made] = c|0x20;
    getchar();
    if (!strchr(word, c|0x20)) guess_count++;
    guesses_made++;
  }
  puts("Player 2 has so far guessed:");
  verify_guesses(word, guesses);
  printf("Player 1 wins.");
  return 0;
  win:
    printf("Player 2 wins.");
    return 0;
}
