#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> 
#include "second.c"
//#include "../ini.h"

struct land {
	int id;
	int things[6];
	int village;
	

} land;

int rollDice() {  
							// FUNCTION TO ROLLDICE
	srand((unsigned int) time(NULL));

	int die1 = 0;
	int die2 = 0;
	int sum = 0;

		die1 = ((rand() %6) + 1);
		die2 = ((rand() %6) + 1);
		sum = (die1 + die2);
		return sum;
}

int selection (char c) {
							// RECOGNIZE EACH KEYPRESSED FOR EACH ACTION
	switch(c) {

		case 'r':
			return rollDice();	// call a dice roll on r
		case 'q':
			exit(0);
					// exit game
		case 'p':
			selectResources();
			break;

		default:
			system("clear");
			printf("%c\n", c);	// buffer
			return 420;
	}
}

void memoryAlloc(struct land **table) {
							// ALLOCATE MEMORY SPACE FOR EACH LAND OWNED 

	table =(struct land*) calloc(4, sizeof(struct land*));

	for(int i = 0; i < 4; i++) {
		table[i] =(struct land*) calloc(4, sizeof(struct land));
	}

}



void selectResources(struct land **LAND, int i, int j, int player) {

	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {

			if(LAND[i][j].id == ID) {
				villageFinder(LAND, i, j, player);


			}

		}
	}
}

void villageFinder(){
	
	secondResourceCode();						
	
}

void tablePrint(){
							// DRAW GAME TABLE
		printf("+----------------+----------------+----------------+----------------+\n");
		printf("|       #0       |       #1       |       #2       |       #3       |\n");
		printf("| N: D           | N: D           | N: D           | N: D           |\n");
		printf("| S: B(4)        | S: I(6)        | S: B(5)        | S: W(10)       |\n");
		printf("| E: L(11)       | E: W(12)       | E: G(9)        | E: D           |\n");//0
		printf("| W: D           | W: L(11)       | W: W(12)       | W: G(9)        |\n");
		printf("|                |                |                |                |\n");
		printf("+----------------+----------------+----------------+----------------+\n");
		printf("|       #4       |       #5       |       #6       |       #7       |\n");
		printf("| N: B(4)        | N: I(6)        | N: B(5)        | N: W(10)       |\n");
		printf("| S: G(3)        | S: L(3)        | S: G(11)       | S: L(4)        |\n");//1
		printf("| E: D           | E: W(10)       | E: D           | E: D           |\n");
		printf("| W: D           | W: D           | W: W(10)       | W: D           |\n");
		printf("|                |                |                |                |\n");
		printf("+----------------+----------------+----------------+----------------+\n");
		printf("|       #8       |       #9       |       #10      |       #11      |\n");
		printf("| N: G(3)        | N: L(3)        | N: G(11)       | N: L(4)        |\n");
		printf("| S: B(8)        | S: W(10)       | S: W(10)       | S: I(3)        |\n");//2
		printf("| E: D           | E: W(9)        | E: D           | E: D           |\n");
		printf("| W: D           | W: D           | W: W(9)        | W: D           |\n");
		printf("|                |                |                |                |\n");
		printf("+----------------+----------------+----------------+----------------+\n");
		printf("|       #12      |       #13      |       #14      |       #15      |\n");
		printf("| N: B(8)        | N: W(10)       | N: W(10)       | N: I(3)        |\n");
		printf("| S: D           | S: D           | S: D           | S: D           |\n");//3
		printf("| E: I(5)        | E: G(2)        | E: L(6)        | E: D           |\n");
		printf("| W: D           | W: I(5)        | W: G(2)        | W: L(6)        |\n");
		printf("|                |                |                |                |\n");
		printf("+----------------+----------------+----------------+----------------+\n");
//                      0               1                 2               3
}


void giveLand(int ID, int player, struct land **table) {
							// PLAYER IDS FOR PLAYER LANDS PICKED TO BE OWNED
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			if(table[i][j].id == ID) {
				table[i][j].village = player;
			}
		}
	}
}


int main() {
	char dice;
	int sum = 0;
	int gameLoop = 0;
	int player[6];
	int player1, player2;

	int whoPlayin;

	struct land **table = NULL;
	memoryAlloc(table);


							// LOOP FUNCTION THAT ROLLS THE 2 DICE	
	while(gameLoop <= 0) {
		system("clear");
		char s;

		tablePrint();

		printf("Player 1, please pick a land to start with\n");
		scanf("%d", &player1);
		printf("Player 2, please pick a land to start with\n");
		scanf("%d", &player2);

		giveLand(player1, 1, table);
		giveLand(player2, 2, table);

		printf("r to roll the dice\n");
		printf("q to quit\n");
		printf("Dice: %d\n", sum);
		dice = getchar();
		s = getchar();
		dice = tolower(dice);
		sum = selection(dice);	
		

	}



	return 0;
}

