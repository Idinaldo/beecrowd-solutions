#include <stdio.h>

int main()
{

	double r, pi = 3.14159, areaCircle;

	scanf("%lf", &r);

	areaCircle = pi * r * r;

	printf("A=%.4lf\n", areaCircle);

	return 0;
}
