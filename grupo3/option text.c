#include <stdio.h>
int main(void) {

	printf("Choose what you wish to do:\n\n");
  
	printf("Place a village.\n");
	//village option
	printf("Choose an area surrounding your village(s) to place it.\n");
	//player selects the option and program asks the player where to place his village
	printf("That area is occupied.\n");
	//players tries to build on an occupied aread
	printf("That area is too far away.\n");
	//players tries to build on an out of reach area
	printf("A village was built, it cost you 1 Brick, 1 Grain, 1 Lumber and 1 Wool.\n");
	//a village was built
	

	printf("Upgrade a village to a city.\n");
	//city option
	printf("Select a village to upgrade.\n");
	//player selects the option and program asks the player which village to upgrade
	printf("That area is already a city.\n");
	//players tries to upgrade a city
	printf("There is no village there.\n");
	//player tries to upgrade an unixistent village
	printf("That is not your village.\n");
	//player tries to upgrade an enemy village
	printf("You have built a city, it cost you  2 Grain and 3 Iron.\n")
	//a city was built


	printf("Trade resources with the bank (4 to 1 ratio).\n");
	//trade resource option
	printf("B for Brick.\n");
	printf("G for Grain.\n");
	printf("I for Iron.\n");
	printf("L for Lumber.\n");
	printf("W for Wool.\n");
	printf("Which resource do you want?\n");
	//player selects the option and program asks which resource the player wants
	printf("Which resource do you wish to trade?\n");
	//asks which resource the player wants to give up on
	printf("You have trade 4 of X for 1 of Y.\n");
	//trade happened


	printf("Trade resources for points (10 to 1 ratio).\n");
	//trade points option
	printf("B for Brick.\n");
	printf("G for Grain.\n");
	printf("I for Iron.\n");
	printf("L for Lumber.\n");
	printf("W for Wool.\n");
	printf("Which resource do you wish to trade for 1 point?\n");
	////player selects the option and program asks which resource the player wants to give up on
	printf("You have traded 10 of X for 1 point.\n");
	//trade happened


	printf("End your turn.\n");
	//ends current player turns


	printf("You do not have enough resources for this.\n");
	printf("Choose another option.\n");
	//player does not have enough resources for the chosen option

	
	printff("That is not a valid option.\n");
	//player fucks up his inputs		


	printf("Player X has 6 points, victory has been claimed!");
	//one of the players has won the game

	return 0;
}