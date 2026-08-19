#include <stdio.h>
#include <math.h>

int main()
{

	double points[2][2], distance;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			scanf("%lf", &points[i][j]);
		}
	}

	distance = sqrt(pow(points[1][0] - points[0][0], 2) + pow(points[1][1] - points[0][1], 2));

	printf("%.4lf\n", distance);

	return 0;
}
