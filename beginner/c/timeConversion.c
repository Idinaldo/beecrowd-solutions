#include <stdio.h>

int main()
{

	int hours = 0, minutes = 0, seconds;

	scanf("%i", &seconds);

	hours = seconds / 3600;
	seconds -= hours * 3600;
	minutes = seconds / 60;
	seconds -= minutes * 60;

	printf("%i:%i:%i\n", hours, minutes, seconds);

	return 0;
}
