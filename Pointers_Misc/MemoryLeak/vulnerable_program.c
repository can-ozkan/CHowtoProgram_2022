#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * This is code from MyCodeSchool
 * Simple Betting Game
 * Jack Queen King - computer shuffles these cards
 * player has to guess the position of queen
 * if the player wins, the player gets 3 * bet
 * Otherwise, the player loses the bet amount
 * the player is initially assigned 100 box
 */
int cash = 100;

void Play(int bet) {
    char *c = (char *)malloc(15000000000 * sizeof(char));

    c[0] = 'J';
    c[1] = 'Q';
    c[2] = 'K';

    printf("Shuffling");
    srand(time(NULL)); //seeding random number generator

    for (int i = 0; i < 5; i++) {
        int x = rand() % 3;
        int y = rand() % 3;

        int temp = c[x];
        c[x] = c[y];
        c[y] = temp;
    }
    int playerGuess;
    printf("Player guess of queen: ");
    scanf("%d", &playerGuess);

    if (c[playerGuess - 1] == 'Q') {
        cash += 3*bet;
        printf("You win! Result = %c %c %c \n", c[0], c[1], c[2]);
        printf("Total Cash: %d\n", cash);
    }
    else {
        printf("You lost! Result = %c %c %c \n", c[0], c[1], c[2]);
        cash -= bet;
        printf("Total Cash: %d\n", cash);

    }
}

int main(void) {

    int bet;

    while (cash > 0) {
        printf("What is your bet?");
        scanf("%d", &bet);
        Play(bet);
        puts("");
    }

    return 0;
}









