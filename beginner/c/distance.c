#include <stdio.h>

int main()
{

	// question provides this information
	const int SPEED_DIFFERENCE = 30;
	int distance, time;

	scanf("%i", &distance);

	// 60 == 1 hour in minutes
	time = distance * (60 / SPEED_DIFFERENCE);

	printf("%i minutos\n", time);

	return 0;
}
