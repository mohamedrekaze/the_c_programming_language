#include <unistd.h>
#include <stdio.h>

int main()
{
	float cels, fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while(fahr <= upper)
	{
		cels = 5 * (fahr-32) / 9;
		printf("[%4.2f] | [%.3f]\n", fahr, cels);
		fahr = fahr + step;
	}
}
