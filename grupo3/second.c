#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

void secondResourceCode(struct land **LAND, int i, int j, int player) {

		// check if land can accept village

							// #0
	if(i == 0) {
		if(j == 0) {
			if(LAND[i][j+1].village == player ||
				LAND[i+1][j+1].village == player ||
				LAND[i+1][j].village == player) {
				LAND[i][j].village = 1;
			}
			else {
				printf("This land cannot be claimed, please pick another land\n");
				selectResources();
			}
		}
	}
							// #player

	if(i == 1) {
		if(j == 0) {
			if(LAND[i-1][j].village == player ||
				LAND[i-1][j+1].village == player ||
				LAND[i][j+1].village == player ||
				LAND[i+1][j+1].village == player ||
				LAND[i+1][j].village == player) {
				LAND[i][j].village = 1;
			}
			else {
				printf("This land cannot be claimed, please pick another land\n");
				selectResources();
			}
		}
	}
							// #8


	if(i == 2) {
		if(j == 0) {
			if(LAND[i-1][j].village == player ||
				LAND[i-1][j+1].village == player ||
				LAND[i][j+1].village == player ||
				LAND[i+1][j+1].village == player ||
				LAND[i+1][j].village == player) {
				LAND[i][j].village = 1;
			}
			else {
				printf("This land cannot be claimed, please pick another land\n");
				selectResources();
			}
		}
	}
							// #12

	if(i == 3) {
		if(j == 0) {
			if(LAND[i+1][j].village == player ||
				LAND[i-1][j-1].village == player ||
				LAND[i][j+1].village == player) {
				LAND[i][j].village = 1;
			}
			else {
				printf("This land cannot be claimed, please pick another land\n");
				selectResources();
			}
		}
	}
							// #1

	if(i == 0) {
		if(j == 1) {
			if(LAND[i][j-1].village == player ||
				LAND[i+1][j-1].village == player ||
				LAND[i+1][j].village == player ||
				LAND[i+1][j+1].village == player ||
				LAND[i][j+1].village == player) {
				LAND[i][j].village = 1;
			}
			else {
				printf("This land cannot be claimed, please pick another land\n");
				selectResources();
			}
		}
	}
							// #5	
	if(i == 1) {
		if(j == 1) {
			if(LAND[i-1][j].village == player ||
				LAND[i-1][j+1].village == player ||
				LAND[i][j+1].village == player ||
				LAND[i+1][j+1].village == player ||
				LAND[i+1][j].village == player ||
				LAND[i+1][j-1].village == player ||
				LAND[i][j-1].village == player ||
				LAND[i-1][j-1].village == player) {
				LAND[i][j].village = 1;
			}
			else {
				printf("This land cannot be claimed, please pick another land\n");
				selectResources();
			}
		}
	}
							// #9
	if(i == 2) {
		if(j == 1) {
			if(LAND[i-1][j].village == player ||
				LAND[i-1][j+1].village == player ||
				LAND[i][j+1].village == player ||
				LAND[i+1][j+1].village == player ||
				LAND[i+1][j].village == player ||
				LAND[i+1][j-1].village == player ||
				LAND[i][j-1].village == player ||
				LAND[i-1][j-1].village == player) {
				LAND[i][j].village = 1;
			}
			else {
				printf("This land cannot be claimed, please pick another land\n");
				selectResources();
			}
		}
	}
							// #13
	if(i == 3) {
		if(j == 1) {
			if(LAND[i][j-1].village == player ||
				LAND[i-1][j+1].village == player ||
				LAND[i-1][j].village == player ||
				LAND[i-1][j-1].village == player ||
				LAND[i][j+1].village == player) {
				LAND[i][j].village = 1;
			}
			else {
				printf("This land cannot be claimed, please pick another land\n");
				selectResources();
			}
		}
	}
							// #3
	if(i == 0) {
		if(j == 2) {
			if(LAND[i][j-1].village == player ||
				LAND[i+1][j-1].village == player ||
				LAND[i+1][j].village == player ||
				LAND[i+1][j+1].village == player ||
				LAND[i][j+1].village == player) {
				LAND[i][j].village = 1;
			}
			else {
				printf("This land cannot be claimed, please pick another land\n");
				selectResources();
			}
		}
	}
							// #6	
	if(i == 1) {
		if(j == 2) {
			if(LAND[i-1][j].village == player ||
				LAND[i-1][j+1].village == player ||
				LAND[i][j+1].village == player ||
				LAND[i+1][j+1].village == player ||
				LAND[i+1][j].village == player ||
				LAND[i+1][j-1].village == player ||
				LAND[i][j-1].village == player ||
				LAND[i-1][j-1].village == player) {
				LAND[i][j].village = 1;
			}
			else {
				printf("This land cannot be claimed, please pick another land\n");
				selectResources();
			}
		}
	}
							// #10
	if(i == 2) {
		if(j == 2) {
			if(LAND[i-1][j].village == player ||
				LAND[i-1][j+1].village == player ||
				LAND[i][j+1].village == player ||
				LAND[i+1][j+1].village == player ||
				LAND[i+1][j].village == player ||
				LAND[i+1][j-1].village == player ||
				LAND[i][j-1].village == player ||
				LAND[i-1][j-1].village == player) {
				LAND[i][j].village = 1;
			}
			else {
				printf("This land cannot be claimed, please pick another land\n");
				selectResources();
			}
		}
	}
							// #14
	if(i == 3) {
		if(j == 2) {
			if(LAND[i][j-1].village == player ||
				LAND[i-1][j+1].village == player ||
				LAND[i-1][j].village == player ||
				LAND[i-1][j-1].village == player ||
				LAND[i][j+1].village == player) {
				LAND[i][j].village = 1;
			}
			else {
				printf("This land cannot be claimed, please pick another land\n");
				selectResources();
			}
		}
	}
							// #4
	if(i == 0) {
		if(j == 3) {
			if(LAND[i][j-1].village == player ||
				LAND[i+1][j-1].village == player ||
				LAND[i+1][j].village == player) {
				LAND[i][j].village = 1;
			}
			else {
				printf("This land cannot be claimed, please pick another land\n");
				selectResources();
			}
		}
	}
							// #7

	if(i == 1) {
		if(j == 3) {
			if(LAND[i-1][j].village == player ||
				LAND[i-1][j-1].village == player ||
				LAND[i][j-1].village == player ||
				LAND[i+1][j-1].village == player ||
				LAND[i+1][j].village == player) {
				LAND[i][j].village = 1;
			}
			else {
				printf("This land cannot be claimed, please pick another land\n");
				selectResources();
			}
		}
	}
							// #11


	if(i == 2) {
		if(j == 3) {
			if(LAND[i-1][j].village == player ||
				LAND[i-1][j-1].village == player ||
				LAND[i][j-1].village == player ||
				LAND[i+1][j-1].village == player ||
				LAND[i+1][j].village == player) {
				LAND[i][j].village = 1;
			}
			else {
				printf("This land cannot be claimed, please pick another land\n");
				selectResources();
			}
		}
	}
							// #15

	if(i == 3) {
		if(j == 3) {
			if(LAND[i-1][j].village == player ||
				LAND[i-1][j-1].village == player ||
				LAND[i][j-1].village == player) {
				LAND[i][j].village = 1;
			}
			else {
				printf("This land cannot be claimed, please pick another land\n");
				selectResources();
			}
		}
	}
}

int main() {
	/* code */
	return 0;
}