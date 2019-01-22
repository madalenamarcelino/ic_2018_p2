#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> 
#include "second.c"

/**
* @author Madalena Marcelino a21700859
* @author Afonso Rosa a21802169
* @date 22 January 2019
*
* @breif An unfinished simplified version of the game catan
*
* 
*/

struct land {
	int id;
	int things[6];
	int village;
	

} land;

int rollDice() {  
/**
* @breif Function to obtain 2 random numbers between 1 and 6
*
* Here is where the two random dice values are created and added toguether
* for every time the player presses the key 'r', this value is the returned
* to be called and used further on
* 
* @return this function returns the added valued of the two random numbers
*
* @breif This line initializes a random generation without repetitions
* @code 
* srand((unsigned int) time(NULL));
* @endcode
*/
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
/**
* @breif Switch cases to determine what each key that is pressed does
*
* @param caseR This is where the function rollDice with the two added random
* numbers is called to be executed
* 
* @param caseQ This case closes the game by using the function exit from the
* stdlib.h library
*
* @param caseP This case is meant to be used for calling the function where
* the player will be able to pick which land he\she wants to use at any given
* round of the game, yet it does not work yet
*
* @param caseDefault This case is in case any other input other than the ones
* specified in the code is intered. If so then the code will loop itself back
* to the beggining of the function
*/
	switch(c) {

		case 'r':
			return rollDice();	
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
/**
* @breif Function to allocate memory space for the player's lands
*
*
*/ 

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
/**
* @breif Function that calls the second part of the code
*
* This secondary code is reserved purely to check if the newly picked land is
* neighoring the previously owned land. This piece of the code was too large to
* keep in the original file therefore it was separated
*/
	
	secondResourceCode();						
	
}

void tablePrint(){
/**
* @breif Function to print a visual of what the catan table looks like
*/
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
/**
* @breif Function gives land to the player
*/
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

/**
* @breif Variable that loops the several main actions of the game
*
* @param systemclear clears the canvas to clean out unecessary clutter
* 
* @param tableprint simply calls the fuunction that prints the visual canvas
*
* @param print.scan this is where tha player inputs the number of the land it
* wants to start playing with
*
* @param giveland calls for the function that associates the land with the given
* player
*
* @param instructions these are instructions that tell the player what to do
* followed by callings of functions to print the values necessaries to lay the game
*/	
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
		printf("press p to pick a land\n");
		printf("Dice: %d\n", sum);
		dice = getchar();
		s = getchar();
		dice = tolower(dice);
		sum = selection(dice);	
		

	}

/**
* @note Unfortunately we were not able to finish the code  and fix all of
* errors in time of the delivery, therefore at this point the game is not 
* playable in the terminal. We sincerly apologise for this but have decided
* to submit everything we have been able to do.
*/	



	return 0;
}

