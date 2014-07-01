#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	//x is computer number
	//y is user number
	int x;
	int y;

	x = rand();
	//printf("%d \n", x);

	while (1){
		y = scanf("%d",&y );
		if (x == y){
			printf("Great job! \n");
			break;
		} else {
			printf("Sorry, try again\n");
		}
	}	
	
	return 0;
}
