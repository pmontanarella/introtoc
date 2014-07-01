#include <stdlib.h>
#include <stdio.h>


int main(int argc, const char *argv[])
{
	int  x;
	int  y;
	float divresult;
	float averesult;
	int request; //division or average
	printf("Please input the first number\n");
	scanf("%d", &x);
	printf("Please input the second number\n");
	scanf("%d", &y);
	printf("Please enter 1 for division or enter 2 for the average\n");
	request = scanf("%d", &request);
	printf("X is %d \n", x);
	printf("Y is %d \n", y);
	if(request == 1) {
		divresult = (float) x / y;
		printf("The result is %f \n", divresult);
	} else {
		averesult = (float) (x + y) / 2;
		printf("The average is %f \n", averesult );
	}
	return 0;
}
