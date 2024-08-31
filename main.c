#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) {
  
  int money = 480;
  printf("%d\n", money);

  // Seed the random number generator with the current time
  srand(time(NULL));

  // AI
  int cpu_move = rand() % 2;   
  
  // Player
  int player_move = 0;
  
  printf("Enter your move: 0) Share 1) Take\n");
  scanf("%d", &player_move);
  
  if (player_move == 0 && cpu_move == 0) {
    printf("You both shared! You got 280.\n");
    exit(0);
  } else if (player_move == 0 && cpu_move == 1) {
    printf("The Computer chose to take! You got 0.\n");
    exit(0);
  } else if (player_move == 1 && cpu_move == 0) {
    printf("You took! You got 480!\n");
  } else if (player_move == 1 && cpu_move == 1) {
    printf("You both took! You got nothing.\n");  
  } else {
    printf("You need to choose 0 or 1.\n");
    exit(0);
  }

  return 0;
}

