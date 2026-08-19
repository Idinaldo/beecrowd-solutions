#include <stdio.h>

int main()
{

	int distance_km;
	double fuel_spent, consumption;

	scanf("%i", &distance_km);
	scanf("%lf", &fuel_spent);

	consumption = distance_km / fuel_spent;

	printf("%.3lf km/l\n", consumption);
	return 0;
}
