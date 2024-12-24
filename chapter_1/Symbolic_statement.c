#include <unistd.h>
#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20
#define string "mohamed rekaz"
#define expression (5*2)
int main()
{
	for(int fahr = UPPER; fahr >= LOWER; fahr -= STEP)
	{
		printf("%d %2.2f\n", fahr,(5.0 / 9.0)*(fahr-32));
	}
	printf("this is string %c\n\n", string[3]);
	printf("this is expression %d\n", expression);
}
