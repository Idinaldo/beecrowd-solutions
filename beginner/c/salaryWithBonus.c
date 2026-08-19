#include <stdio.h>

int main()
{

	char name[60];
	double salary, total_sold, final_salary;

	scanf("%s", name);
	scanf("%lf%lf", &salary, &total_sold);

	final_salary = salary + total_sold * 0.15;

	printf("TOTAL = R$ %.2lf\n", final_salary);

	return 0;
}
