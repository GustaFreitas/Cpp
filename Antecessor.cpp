#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{	
	setlocale (LC_ALL, "Portuguese");
	
	int Num,Res;
	
	printf ("Digite um número: ");
	scanf  ("%d", &Num);
	
	Num = Num - 1;
	
	printf ("O Antecessor é: %d", Num);
	
	//system ("pause");
  
	return 0;
}
