# c99-Snake

This is a simple snake game written in C99. The game is played on a 20x20 grid, and the player controls a snake that grows in length as it eats fruit. The goal of the game is to eat as much fruit as possible without colliding with the walls or the snake's own body.

## How to Play

Use the following keys to control the snake:

* `a`: Move left
* `s`: Move down
* `d`: Move right
* `w`: Move up
* `x`: Quit the game

The snake will automatically move in the direction of the last key that was pressed. If you press no keys, the snake will continue moving in the same direction as before.

## Fruit

Fruit appears randomly on the grid. When the snake eats a fruit, it grows in length. The longer the snake becomes, the more points it scores.

## Walls

The snake cannot move through walls. If the snake collides with a wall, the game is over.

## Self-Collision

The snake cannot collide with its own body. If the snake collides with its own body, the game is over.

## Score

The player's score is the number of fruits that the snake has eaten. The player's high score is saved to a file.

## Controls

The controls for the game can be customized in the `config.h` file.

<img width="902" alt="צילום מסך 2023-08-26 ב-14 09 50" src="https://github.com/fkzx8000/c99-Snake/assets/117019431/534555a3-4305-42fd-b733-266f51d57f59">
