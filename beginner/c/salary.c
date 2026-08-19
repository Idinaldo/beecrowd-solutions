#include <stdio.h>

int main()
{

	int worker_id, hours_worked;
	double wage_hour, salary;

	scanf("%i%i%lf", &worker_id, &hours_worked, &wage_hour);

	salary = hours_worked * wage_hour;

	printf("NUMBER = %i\nSALARY = U$ %.2lf\n", worker_id, salary);

	return 0;
}
