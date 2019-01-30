#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> 
#include "second.h"

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

/*
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
*
* to the beggining of the function
*/



void memoryAlloc(struct land **table) {
/**
* @breif Function to allocate memory space for the player's lands
*
*
*/ 

	table =(struct land**) calloc(4, sizeof(struct land*));

	for(int i = 0; i < 4; i++) {
		table[i] =(struct land*) calloc(4, sizeof(struct land));
	}

}



void selectResources(struct land **LAND, int player, int ID) {


	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {

			if(LAND[i][j].id == ID) {
				Restrictions(LAND, i, j, player);


			}

		}
	}
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
	int ID = 15;


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
		char opc;


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
		printf("press m to open the rule menu");
		printf("Dice: %d\n", sum);
		dice = getchar();
		dice = tolower(dice);
		opc = getchar();	
		
		switch(opc) {

			case 'r':
				return rollDice();	
			case 'p':
				selectResources(table, *player, ID);
				break;
			case'm':

				system("clear");
				printf("Welcome to our game, it's a game for 2 players that opose eachother.\n\n"); 
				printf("At the start of the game each player will choose a starting location on the map, in which they will place their first village.\n");
				printf("You must pick different locations.\n");
				printf("You CAN NOT have villages in the same location as eachother.\n");
				printf("player 1 goes first).\n");
				printf("Each local has terrains on the North (N), the South (S), the East (E) and the West (W).\n"); 
				printf("These terrains are associated to specific numbers and each of these terrains produce certain natural resources that are as follows: \n"); 
				printf("\n\n-Wool (W)\n-Brick (B)\n-Lumber (L)\n-Grain (G)\n-Iron (I)\n-Desert (D)\n\n");
				printf("The game progresses via a round system.\n");
				printf("Each round the player that is currently playing will roll two six-sided die.\n");
				printf("The sum of the numbers they get is the resource they will take from the terrains in their village(s).\n"); 
				printf("If there is no number that equals that sum, the player gets nothing.\n");
				printf("After rolling the dice the player can do any of these actions as long as the resources he/she owns allows it:\n\n");
				printf("-Buy a village and place in an adjacent local\n");
				printf("-Transform a village into a city, doubling resource production in adjacent terrains to the city\n");
				printf("-Trade resources with the bank in a 4 to 1 ratio, he trades 4 resource cards for 1 he wants\n");
				printf("-Trade with the bank, in a 10 to 1 raito, 10 resources for 1 point\n");
				printf("-Ending his turn, therefore comencing the other player's turn\n\n");
				printf("The winner is the player that reaches 6 points, each village is worth 1 point whilst citys are worth 2 points.\n\n");
				printf("To buy a village you need:\n Brick (B),Lumber (L), Grain (G), Wool (W) \n\n");
				printf("To buy a city you need: \n-2 Grain (G) and 3 Iron (I)\n\nGood luck and have fun.\n\n");

				opc = getchar();
				break;
			case 'q':
				exit(0);
						// exit game

			default:
				system("clear");
				printf("%c\n", opc);	// buffer
				return 420;
		}

	}


	return 0;
}

