#include <stdio.H>
#include <stdlib.H>

int main () 
{
  int Num;
  
  printf ("Digite o numero inteiro: ");
  scanf  ("%d", &Num);
  
  if (Num % 2 == 0)
  
{
  	printf ("O numero %d e par.",Num);
}
  	else	
{
 	printf ("O numero %d e impar.",Num);	
}

  //system ("pause");
  
  return 0;
}
