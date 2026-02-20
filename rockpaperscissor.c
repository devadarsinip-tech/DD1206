#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;

    printf("=== Rock–Paper–Scissors Game ===\n");
    printf("Enter your choice:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Your choice: ");
    scanf("%d", &player);

    // Generate random choice for computer
    srand(time(0));
    computer = (rand() % 3) + 1;

    printf("\nYou chose: ");
    if (player == 1) printf("Rock");
    else if (player == 2) printf("Paper");
    else if (player == 3) printf("Scissors");
    else {
        printf("Invalid choice!");
        return 0;
    }

    printf("\nComputer chose: ");
    if (computer == 1) printf("Rock");
    else if (computer == 2) printf("Paper");
    else printf("Scissors");

    printf("\n");

    // Determine the winner
    if (player == computer) {
        printf("\nIt's a tie!\n");
    } else if ((player == 1 && computer == 3) ||
               (player == 2 && computer == 1) ||
               (player == 3 && computer == 2)) {
        printf("\nYou win!\n");
    } else {
        printf("\nComputer wins!\n");
    }

    return 0;
}
