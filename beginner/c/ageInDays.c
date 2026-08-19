#include <stdio.h>

int main()
{

	int years = 0, months = 0, days;

	scanf("%i", &days);

	years = days / 365;
	days -= years * 365;
	months = days / 30;
	days -= months * 30;

	printf("%i ano(s)\n", years);
	printf("%i mes(es)\n", months);
	printf("%i dia(s)\n", days);

	return 0;
}
