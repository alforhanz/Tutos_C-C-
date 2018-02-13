/*calculo del factorial de un numero*/
#include <stdio.h>
int main()
{
	int x,a,f,s;
	
printf("calcular el factorialde:");
scanf("%d",& a);
 x=a;
	for(int i=x; i>1; i--)
		{			
			f=a*(i-1);			
			a=f;
		}

printf("\n\t\t%d! = %d",x,a);
printf("\n");
}