#include <stdlib.H>
#include <stdio.H>
#include <locale.H>

int main ()
{
	int   Cod, Car = 0, Tes = 0;
	float Val, Jur, Par, Med = 0, Tot = 0, Mai = 0;
	char  Opc, P = '%';
	
	setlocale (LC_ALL, "Portuguese");
	
	
	do
	{
		Jur = 0;
		Par = 0;
		Tes = 0;
		
		system ("cls");
		
		printf ("\n=============Concession�ria=============");
		printf ("\n========================================");
		printf ("\nPlano 1 = Avista");
		printf ("\nPlano 2 = 20 Parcelas com juros de 40%c",P);
		printf ("\nPlano 3 = 60 Parcelas com juros de 60%c",P);
		printf ("\n========================================");
	
		printf ("\n\nDigite o c�digo do plano de compra: ");
		scanf  ("%d", &Cod);
		printf ("Digite o valor do ve�culo: ");
		scanf  ("%f", &Val);
	
		if (Cod == 1)
		{
			//Avista
			
			Car++;
			Tot = Val + Tot;
			
			printf ("\n\nO valor do ve�culo com pagamento a avista � de: R$%.2f", Val);
		
		}
		else if (Cod == 2)
		{
			//40 vezes
		
			Jur = (Val / 100)* 40;
			Val = Jur + Val;
			Par = Val / 40;
			Car++;
			Tot = Val + Tot;
		
			printf ("\n\nO valor do ve�culo dividido em 40 vezes � de: R$%.2f", Val);
			printf ("\nO valor da parcela � de: R$%.2f", Par);
		}
		else if (Cod == 3)
		{
			//60 vezes
		
			Jur = (Val / 100)*60;
			Val = Jur + Val;
			Par = Val / 60;
			Car++;
			Tot = Val + Tot;		
			
			printf ("\n\nO valor do ve�culo dividido em 60 vezes � de: R$%.2f", Val);
			printf ("\nO valor da parcela � de: R$%.2f", Par);
		}
		else
		{
			Tes = 1;
			
			printf ("\n\nC�digo do plano de compra inv�lido.");
		}
		
		if (Val > Mai && Tes == 0)
		{
			Mai = Val;
		}
		
		printf ("\n\nDeseja continuar? (S/N)   ");
		fflush (stdin);
		scanf  ("%c", &Opc);
	}
	while (Opc == 's' || Opc == 'S');
	
	Med = Tot / Car;
	
	printf ("\nO valor m�dio obtido pela concessionaria por venda � de: R$%.2f", Med);
	printf ("\nO valor do ve�culo mais caro � de: R$%.2f", Mai);
	
	return 0;
}
