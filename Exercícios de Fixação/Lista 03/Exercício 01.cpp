#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{	
	setlocale (LC_ALL, "Portuguese");
	
	int 	Fal[11], Qtd_Nov = 0, Qtd_Rep = 0, Mai_Alu = 0, Men_Alu = 0;
	float 	Not[11], Mai_Not = 0, Men_Not = 999999999;
	
	for (int i = 1 ; i <= 10 ; i++)
	{
		system ("cls");
		printf ("Digite a nota do %d° aluno: ", i);
		scanf  ("%f", &Not[i]);
		printf ("Digite o total do faltas do %d° aluno: ", i);
		scanf  ("%d", &Fal[i]);
	}
	
	system ("cls");
	printf ("Os alunos com nota igual ou acima de 90 pts são:");
	
	for (int i = 1 ; i <= 10 ; i++)
	{
		if (Not[i] >= 90)
		{
			printf ("\nAluno %d : %.1f pts", i, Not[i]);
			Qtd_Nov++;
		}
		
		if (Not[i] > Mai_Not)
		{
			Mai_Not = Not[i];
			Mai_Alu = i;
		}
		
		if (Not[i] < Men_Not)
		{
			Men_Not = Not[i];
			Men_Alu = i;
		}
	}
	
	printf ("\nSendo um total de %d alunos.", Qtd_Nov);
	
	printf ("\n\nO Aluno com a maior nota é o Aluno %d com o total de %.1f pts.", Mai_Alu, Mai_Not);
	printf ("\nO Aluno com a menor nota é o Aluno %d com o total de %.1f pts.", Men_Alu, Men_Not);
	
	printf ("\n\nOs alunos reprovados são:");
	
	for (int i = 1 ; i <= 10 ; i++)
	{
		if (Not[i] < 70)
		{
			printf ("\nAluno %d foi reprovado pelo critério nota: %.1f pts", i, Not[i]);
			Qtd_Rep++;
		}
		else if (Fal[i] >= 20)
		{
			printf ("\nAluno %d foi reprovado pelo critério faltas: %d faltas", i, Fal[i]);
			Qtd_Rep++;
		}
	}
	
	printf ("\nSendo um total de %d alunos.", Qtd_Nov);
  
	return 0;
}
