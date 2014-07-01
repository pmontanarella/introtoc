#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
	int  x, y, left_over, original_result;
	printf("Choose the first number\n");
	scanf("%d", &x);
	printf("Choose the second number\n");
	scanf("%d", &y);
	left_over = x % y;
	original_result = x / y;
	//printf("%d \n", left_over);    
	if (original_result >= 1 && left_over == 0) 
	{
		printf("Yes\n");
	}
	else 
	{
		printf("No \n");
	}
	    
return 0;
}

