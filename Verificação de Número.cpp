#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	float Num;
	
	printf ("Digite um numero: ");
	scanf  ("%f", &Num);
	
	if (Num == 0)
{
   		printf ("Número igual a 0.");
}
	else 
{
		if (Num > 0) 
{
     		printf ("Número maior que zero.");
     		
}
   		else
{
            printf ("Número menor que zero");
}
}
	
	//system ("pause");
  
  return 0;
}
