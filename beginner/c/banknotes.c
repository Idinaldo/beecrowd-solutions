#include <stdio.h>

int main()
{

	int amount;
	int one_hundred = 0, fifty = 0, twenty = 0, ten = 0, five = 0, two = 0, one = 0;

	scanf("%i", &amount);
	printf("%i\n", amount);

	while (amount > 0)
	{
		if (amount >= 100)
		{
			one_hundred++;
			amount -= 100;
		} else if (amount >= 50)
		{
			fifty++;
			amount -=50;
		} else if (amount >= 20)
		{
			twenty++;
			amount -= 20;
		} else if (amount >= 10)
		{
			ten++;
			amount -= 10;
		} else if (amount >= 5)
		{
			five++;
			amount -= 5;
		} else if (amount >= 2)
		{
			two++;
			amount -= 2;
		} else {
			one++;
			amount--;
		}
	}
	printf("%i nota(s) de R$ 100,00\n", one_hundred);
	printf("%i nota(s) de R$ 50,00\n", fifty);
	printf("%i nota(s) de R$ 20,00\n", twenty);
	printf("%i nota(s) de R$ 10,00\n", ten);
	printf("%i nota(s) de R$ 5,00\n", five);
	printf("%i nota(s) de R$ 2,00\n", two);
	printf("%i nota(s) de R$ 1,00\n", one);

	return 0;
}
