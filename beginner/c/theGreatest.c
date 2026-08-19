#include <stdio.h>
#include <stdlib.h>

int greatest(int a, int b);

int main()
{

	int a, b, c, result;

	scanf("%i%i%i", &a, &b, &c);

	result = greatest(greatest(a, b), c);

	printf("%i eh o maior\n", result);

	return 0;
}

int greatest(int a, int b)
{
	return (a + b +	abs(a - b)) / 2;
}
