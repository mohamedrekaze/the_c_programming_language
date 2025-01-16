#include <setjmp.h>
#include <stdio.h>
#include <unistd.h>







int main()
{
	int i;
	i = 0;

	i = getchar();
	while(i != EOF)
	{
		putchar(i);
		i = getchar();
	}

}
