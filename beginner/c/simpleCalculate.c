#include <stdio.h>

int main()
{

	int id_product1, amount_product1;
	int id_product2, amount_product2;
	double price_product1, price_product2, total;

	scanf("%i%i%lf", &id_product1, &amount_product1, &price_product1);
	scanf("%i%i%lf", &id_product2, &amount_product2, &price_product2);

	total = amount_product1 * price_product1 + amount_product2 * price_product2;

	printf("VALOR A PAGAR: R$ %.2lf\n", total);

	return 0;
}
