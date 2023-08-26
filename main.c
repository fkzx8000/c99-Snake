#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HEIGHT 20
#define WIDTH 20

int main() {
  int i, j, x, y, fruit_x, fruit_y, flag, score;
  char input;

  // Initialize the game
  srand(time(NULL));
  x = HEIGHT / 2;
  y = WIDTH / 2;
  fruit_x = rand() % HEIGHT;
  fruit_y = rand() % WIDTH;
  flag = 0;
  score = 0;

  // Play the game
  while (1) {
    // Clear the screen
    for (i = 0; i < HEIGHT; i++) {
      for (j = 0; j < WIDTH; j++) {
        printf(" ");
      }
      printf("\n");
    }

    // Draw the snake and the fruit
    for (i = 0; i < HEIGHT; i++) {
      for (j = 0; j < WIDTH; j++) {
        if (i == 0 || i == HEIGHT - 1 || j == 0 || j == WIDTH - 1) {
          printf("#");
        } else if (i == x && j == y) {
          printf("0");
        } else if (i == fruit_x && j == fruit_y) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }

    // Get the input from the user
    input = getc(stdin);

    // Update the snake's position
    switch (input) {
      case 'a':
        y--;
        break;
      case 's':
        x++;
        break;
      case 'd':
        y++;
        break;
      case 'w':
        x--;
        break;
      case 'x':
        goto end;
      default:
        break;
    }

    // Move the snake
    switch (flag) {
      case 1:
        y--;
        break;
      case 2:
        x++;
        break;
      case 3:
        y++;
        break;
      case 4:
        x--;
        break;
      default:
        break;
    }

    // Check if the game is over
    if (x < 0 || x >= HEIGHT || y < 0 || y >= WIDTH) {
      goto end;
    }

    if (x == fruit_x && y == fruit_y) {
      // Check if the fruit is on the edge of the map
      if (fruit_x == 0 || fruit_x == HEIGHT - 1 || fruit_y == 0 || fruit_y == WIDTH - 1) {
        // Generate a new fruit in the middle of the map
        fruit_x = (HEIGHT - 1) / 2;
        fruit_y = (WIDTH - 1) / 2;
      } else {
        fruit_x = rand() % HEIGHT;
        fruit_y = rand() % WIDTH;
      }
      score++;
    }
  }

end:
  // Print the final score
  printf("Score: %d\n", score);
  return 0;
}
