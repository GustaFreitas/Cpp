#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	setlocale (LC_ALL, "portuguese");
	int idade, masc = 0, femin = 0;
	float med, total = 0;
	char sexo;
	for (int i=0; i<3; i++)
	{
	printf ("Digite sua idade: ");
	scanf ("%d", &idade);
	fflush (stdin);
	printf ("Digite seu sexo (F/M): ");
	scanf ("%c", &sexo);
	fflush (stdin);
	if (sexo == 'f')
	{
		femin++;
	}
	else if (sexo == 'm')
	{
		masc++;
	}
	total = idade + total; 
	}
	med = total/3;
	printf ("A quantidade de pessoas do sexo Masculino �: %d\n", masc);
	printf ("A quantidade de pessoas do sexo Feminino �: %d\n", femin);
	printf ("A m�dia geral das idades � de: %.2f", med);
	
	return 0;
}

