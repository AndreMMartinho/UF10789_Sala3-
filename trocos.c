// programa trocos.c

#include <stdio.h>
#include <math.h>

int main()
{
    int total_centimos, num_moedas;
	double montante_euros = 1.0;
	
	printf("Introduza um montante em euros, podendo ter centimos: ");
	scanf("%lf", &montante_euros);
	
	total_centimos = (int)round(montante_euros * 100.0);
	
	num_moedas = total_centimos / 200;
	if (num_moedas > 0) 	
	{
		printf("2 euros: %d\n", num_moedas);
	}
	total_centimos = total_centimos % 200;
	
	num_moedas = total_centimos / 100;
	if (num_moedas > 0)
	{
		printf("1 euro: %d\n", num_moedas);
	}
	total_centimos = total_centimos % 100;
	
	num_moedas = total_centimos / 50;
	if (num_moedas > 0)
	{
		printf("50 centimos: %d\n", num_moedas);
	}
	total_centimos = total_centimos % 50;
	
	num_moedas = total_centimos / 20;
	if (num_moedas > 0)
	{
		printf("20 centimos: %d\n", num_moedas);
	}
	total_centimos = total_centimos % 20;
	
	num_moedas = total_centimos / 10;
	if (num_moedas > 0)
	{
		printf("10 centimos: %d\n", num_moedas);
	}
	total_centimos = total_centimos % 10;
	
	num_moedas = total_centimos / 5;
	if (num_moedas > 0)
	{
		printf("5 centimos: %d\n", num_moedas);
	}
	total_centimos = total_centimos % 5;

	num_moedas = total_centimos / 2;
	if (num_moedas > 0)
	{
		printf("2 centimos: %d\n", num_moedas);
	}
	total_centimos = total_centimos % 2;

	num_moedas = total_centimos / 1;
	if (num_moedas > 0)
	{
		printf("1 centimo: %d\n", num_moedas);
	}
	total_centimos = total_centimos % 1;	
	
	return 0;
}