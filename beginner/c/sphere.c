#include <stdio.h>
#include <math.h>

int main()
{

	double r, pi = 3.14159, volume;

	scanf("%lf", &r);

	volume = (4/3.0) * pi * pow(r, 3);

	printf("VOLUME = %.3lf\n", volume);

	return 0;
}
