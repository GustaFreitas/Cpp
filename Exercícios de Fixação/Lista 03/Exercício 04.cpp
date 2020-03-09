#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{	
	setlocale (LC_ALL, "Portuguese");
	
	int 	Aba = 0, Aci = 0;
	float 	Not_1[11], Not_2[11], Not_3[11], Med[11], Med_Ger = 0;
	
	for (int i = 1 ; i <= 10 ; i++)
	{
		printf ("Digite a 1° nota do %d° aluno: ", i);
		scanf  ("%f", &Not_1[i]);
		printf ("Digite a 2° nota do %d° aluno: ", i);
		scanf  ("%f", &Not_2[i]);
		printf ("Digite a 3° nota do %d° aluno: ", i);
		scanf  ("%f", &Not_3[i]);
		system ("cls");
	}
	
	printf ("As notas finais dos alunos são:");
	
	for (int i = 1 ; i <= 10 ; i++)
	{
		Med[i] = Not_1[i] + Not_2[i] + Not_3[i];
		
		Med[i] = Med[i] / 3;
		
		Med_Ger = Med_Ger + Med[i];
		
		printf ("\nAluno %d: %.1f pts", i, Med[i]);
	}
	
	Med_Ger = Med_Ger / 10;
	
	printf ("\n\nA média geral da turma é: %.1f", Med_Ger);
	
	printf ("\n\nOs alunos acima da média são:");
	
		for (int i = 1 ; i <= 10 ; i++)
	{
		
		if (Med[i] >= Med_Ger)
		{
			Aci++;
			printf ("\nO aluno %d está acima da média da turma.", i);
		}
	}
	
	printf ("\nSendo um total de %d", Aci);
	printf ("\n\nOs alunos abixo da média são:");
	
		for (int i = 1 ; i <= 10 ; i++)
	{
		if (Med[i] < Med_Ger)
		{
			Aba++;
			printf ("\nO aluno %d está abaixo da média da turma.", i);
		}
	}
	printf ("\nSendo um total de %d", Aba);
	
	return 0;
}
