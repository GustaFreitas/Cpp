#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "portuguese");
	int idade, qtd = 0;
	float med, total = 0;
	for (int i=1; i<=3; i++)
	{
		printf ("Digite sua idade: ");
		scanf ("%d", &idade);
		total = idade + total;
		if (idade >= 18)
		{
		qtd++;
		}
	}
	med = total/3;
	printf ("A m�dia de idade � de: %.2f\n", med);
	printf ("O n�mero de pessoas acima de 18 anos �: %d", qtd);
	
	return 0;
}
