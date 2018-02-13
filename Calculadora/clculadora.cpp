/*Autor: alforhanz@alforhanz-*/
/*Calculadora Cientifica*/


#include <stdlib.h>
#include <stdio.h>
int main()
{
float x,y,z,sum,dif,mult,div,pot;

int fac,a,q,opt,i=0;
int j=0;
//son 31 espacios para los asteriscos
do {printf("\n\t\t*******************************");
	printf("\n\t\t* Bienvenid@ a la calculadora *");
    printf("\n\t\t* opcion1: Suma               *\n\t\t* opcion2: Resta              *\n\t\t* opcion3: Multiplicacion     *\n\t\t* opcion4: Division           *\n\t\t* opcion5: Factorial !        *\n\t\t* opcion6: Potenciacion       *\n\t\t* Opcion7: Sin                *\n\t\t* Opcion8: Cos                *");
    printf("\n\t\t*******************************\n\t\t : ");
    scanf("%d",&opt);
    
        switch(opt)
           {
			case 1: printf("\n\t\topcion suma\n");
					printf("\n\t\tIngrese el primer valor: ");
					scanf("%f",&x);
					printf("\n\t\tIngrese el segundo valor: ");
					scanf("%f",&y);
					sum=x+y;
					printf("\n\t\t");
					printf("\n\t\tEl resultado es: %.2f \n",sum);
			break;
			case 2: printf("\n\t\topcion Resta\n");
					printf("\n\t\tIngrese el primer valor: ");
					scanf("%f",&x);
					printf("\n\t\tIngrese el segundo valor: ");
					scanf("%f",&y);
					dif=x-y;
					printf("\n\t\t");
					printf("\n\t\tEl resultado es = %.2f \n",dif);	
			break;
			case 3: printf("\n\t\topcion Multiplicacion\n");
					printf("\n\t\tIngrese el primer valor: ");
					scanf("%f",&x);
					printf("\n\t\tIngrese el segundo valor: ");
					scanf("%f",&y);
					mult=x*y;
					printf("\n\t\t");
					printf("\n\t\tEl resultado es = %.2f \n",mult);	
			break;
			case 4: printf("\n\t\topcion Division\n");
					printf("\n\t\tIngrese el primer valor: ");
					scanf("%f",&x);
					printf("\n\t\tIngrese el segundo valor: ");
					scanf("%f",&y);
					if(y!=0)
					  {
					  	div=x/y;
					  	printf("\n\t\t");
						printf("\n\t\tEl resultado es = %.2f \n",div);	
					  }
					  else
					    {printf("\n\t\tError 2( la Division entre 0 no existe");}
			break;
			case 5:	printf("\n\t\tcalcular el factorialde\n\t\t: ");
					scanf("%d",& a);
 					q=a;
					for(int j=q; j>1; j--)
						{			
							fac=a*(j-1);			
							a=fac;
						}

						printf("\n\t\t%d! = %d",q,a);
						
			break;
			case 6:	printf("\n\t\tcalculo de un número elevado a una potencia x\n\t\t: ");
					printf("\n\t\tIntruduzca el numero: ");
					scanf("%f",&x);
					printf("\n\t\tindique a que potencia lo desea elevar:");
					scanf("%f",&y);
					z=x;
					for(int j=1;j<y;j++ )
						{
							pot=x*z;
							x=pot;					
						}						
					printf("\n\t\t(%0.2f)^(%0.2f) = (%0.2f)\n",z,y,x); 										

			break;
			

			default: printf("\n\t\tError esta opcion no esta dentro de las contempladas para los calculos "); 
           }
        printf("\n");   
    	printf("\n\t\tDesea realizar otro calculo???:\n\t\t1-Sí\n\t\t2-No\n\t\t ");
    	//printf("\n\t\t1-Sí");
    	//printf("\n\t\t2-No");
    	//printf("\n\t\t");
    	scanf("%d",&i);      
    	system("clear");
   	}while(i!=2);//mientras sea diferente a dos cuando es dos el rompe el ciclo y termina.    
   	printf("\n\t\tADIOS...>>>Enter para cerrar el programa.......\n");   	
}//fin...