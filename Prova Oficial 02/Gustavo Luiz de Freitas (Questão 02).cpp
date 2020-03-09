#include <stdlib.H>
#include <stdio.H>

struct vendedor
	{
	int 	Cod, Ven;
	};

int main ()
{
	char 	Opc;
	int 	Tot_Ven, Qtd = 0, Tie_1 = 0, Tie_2 = 0, Tie_3 = 0, Cod_Mai = 0;
	float 	Sal = 0, Com = 0, Tot_Fol = 0, Med_1 = 0, Med_2 = 0, Med_3 = 0, Med_Ger = 0, Mai = 0;
	
	struct vendedor v;
	
	do
	{
		system ("cls");
		printf ("Digite o codigo do funcionario: ");
		scanf  ("%d", &v.Cod);
		printf ("Digite o valor total de vendas do funcionario: ");
		scanf  ("%d", &v.Ven);
		
		if (v.Ven <= 10)
		{
			//tier 1
			Sal = 700;
			
			Med_1 = Med_1 + v.Ven;
			Tie_1++;
			
			Med_Ger = Med_Ger + v.Ven;
			
			Qtd++;
			
			printf ("\nO vendedor com o codigo numero %d pertence ao grupo 1.", v.Cod);
			printf ("\nO salario total do vendedor e de: R$%.2f", Sal);
		}
		else if (v.Ven > 10 && v.Ven <= 20)
		{
			//tier 2
			Sal = 1000;
			
			if (v.Ven > 16)
			{
				Com = v.Ven - 16;
				Com = 21 * Com; 
				Sal = Sal + Com;
			}
			
			Med_2 = Med_2 + v.Ven;
			Tie_2++;
			
			Med_Ger = Med_Ger + v.Ven;
			
			Qtd++;
			
			printf ("\nO vendedor com o codigo numero %d pertence ao grupo 2.", v.Cod);
			printf ("\nO salario total do vendedor e de: R$%.2f", Sal);
		}
		else if (v.Ven > 20)
		{
			//tier 3
			Sal = 2000;
			
			if (v.Ven > 30)
			{
				Com = v.Ven - 30;
				Com = 30 * Com; 
				Sal = Sal + Com;
			}
			
			Med_3 = Med_3 + v.Ven;
			Tie_3++;
			
			Med_Ger = Med_Ger + v.Ven;
			printf ("%f", Med_3);
			Qtd++;
			
			printf ("\nO vendedor com o codigo numero %d pertence ao grupo 3.", v.Cod);
			printf ("\nO salario total do vendedor e de: R$%.2f", Sal);
		}
		
		Tot_Fol = Tot_Fol + Sal;
		
		Tot_Ven = Tot_Ven + v.Ven;
		
		if (Sal > Mai)
		{
			Mai = Sal;
			Cod_Mai = v.Cod;
		}
		
		printf ("\n\nDeseja cadastrar um novo vendedor? (S/N)	-");
		fflush (stdin);
		scanf  ("%c", &Opc);
	}
	while (Opc == 's');
		
	Med_1 = Med_1 / Tie_1;
	Med_2 = Med_2 / Tie_2;
	Med_3 = Med_3 / Tie_3;
		
	Med_Ger = Med_Ger / Qtd;
	
	system ("cls");
	printf ("Programa executado %d vezes.", Qtd);
	printf ("\nO total da folha de pagamento da empresa foi de: %.2f", Tot_Fol);
	printf ("\nO total de vendas da empresa foi de: %d", Tot_Ven);
	printf ("\nA media de vendas do grupo 1 foi de: %.1f", Med_1);
	printf ("\nA media de vendas do grupo 2 foi de: %.1f", Med_2);
	printf ("\nA media de vendas do grupo 3 foi de: %.1f", Med_3);
	printf ("\nA media geral de vendas foi de: %.1f", Med_Ger);
	printf ("\nO vendedor de maior salario foi o vendedor com o codigo de numero %d. Total do salario: %.2f", Cod_Mai, Mai);
	
}
