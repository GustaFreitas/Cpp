#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{	
	setlocale (LC_ALL, "Portuguese");
	
	int 	Num_Fil, Tot_Fil = 0, QTD = 0 , Ric = 0;
	float	Sal = 1, Tot_Sal = 0, Med_Sal, Med_Fil, Mai_Sal;
	
	
	
	while (Sal >=0)
	{
		printf ("Digite o salário do indivíduo: ");
		scanf  ("%f", &Sal);
		
		if (Sal > 0)
		{
			printf ("Digite o número de filhos do indivíduo: ");
			scanf  ("%d", &Num_Fil);
			
			if (Num_Fil < 0)
			{
				exit (0);
			}
			
			Tot_Fil = Tot_Fil + Num_Fil;
			QTD++;
			Tot_Sal= Tot_Sal + Sal;
		}
		if (Sal > Mai_Sal)
		{
			Mai_Sal= Sal;
		}
		if (Sal >= 150)
		{
			Ric++;
		}
	}
	
	Med_Sal = Tot_Sal / QTD;
	Med_Fil = Tot_Fil / QTD;
	
	printf ("\nA média de salários é %.2f\n", Med_Sal);
	printf ("A média de filhos é %.2f\n", Med_Fil);
	printf ("O maior salário tem o valor de R$%.2f\n", Mai_Sal);
	printf ("O número de pessoas que recebem mais que R$150 é de: %d", Ric);
	
	//system ("pause");
  
	return 0;
}
