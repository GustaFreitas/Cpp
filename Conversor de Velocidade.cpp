#include <stdio.H>
#include <stdlib.H>

int main ()
{
	
float Vel;
	
  printf ("Digite a velocidade em Km/h: ");
  scanf  ("%f",&Vel);
	
  Vel = Vel*1000/3600;
  printf ("A velocidade e de: %.2f M/s",Vel);

	
  //system ("pause");  
  return 0;
}
