#include<stdio.h>

int main()
{
	float x,y,p,pot=0;

	printf("Potenciación");
	printf("\n\t\tIntruduzca el numero: ");
	scanf("%f",&x);
	printf("\n\t\tindique a que potencia lo desea elevar:");
	scanf("%f",&p);
	y=x;
	for(int i=1; i<p;i++)
	{
		pot=x*y;
		x=pot;
		//printf("%f\n",pot);
	}

	printf("\n\t\t(%0.2f)^(%0.2f) = %0.2f\n",y,p,pot);

}

