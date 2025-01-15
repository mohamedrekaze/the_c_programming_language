#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main()
{
	int i = 0;
	char *input = (char*)malloc(100 * sizeof(char));
	
	while(i < 4)
	{
		input[i] = getchar();
		i++;
	}
	printf("this is the inputed string %s\n", input);
	//free(input);
}
