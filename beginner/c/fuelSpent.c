#include <stdio.h>

int main()
{

	const double CAR_PERFORMANCE_KM_L = 12;
	int time_spent, average_speed;
	double liters;

	scanf("%i%i", &time_spent, &average_speed);

	liters = average_speed * time_spent / CAR_PERFORMANCE_KM_L;

	printf("%.3lf\n", liters);

	return 0;
}
