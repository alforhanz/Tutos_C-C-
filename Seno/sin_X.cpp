/*este conjunto de instrucciones en c calcula el seno de un número donde xE R r es los números reales*/

#include <stdio.h> 
#include <math.h> 

int main() 
{ 
	float x,seno; 

	//printf("\n\t\tEscribe un numero: "); 
	//scanf("%f",&x); 
	seno=sin(90);
	printf("%.4f\n",seno);  
	
	//printf("\n\t\tEl seno(%0.5f) = %.5f\t",x,seno); //el .5 son los decimales que quieres que tenga 
	
}
/*
#include <stdio.h> 
#include <math.h> 

int main() 
{ 
float x,s; 
//clrscr(); 
printf("Escribe un numero: "); 
scanf("%f",&x); 
s=sin(x); 
printf("El seno = %.5f\t", s); // el .5 son los decimales que quieres que tenga

//getch(); 
} */
/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Ejemplo aprenderaprogramar.com
int main() {
    double M = -5.75; int N = 7; double Pi = 3.14159; //Equivale a 180 grados sexagesimales
    printf ("El valor absolucto de M es %g y el de N es %g\n", fabs(M), fabs(N));
    printf ("El coseno de Pi es %g\n", cos(Pi));        
    printf ("2 elevado al cubo vale %g\n", pow(2, 3));
    printf ("El numero pi redondeado con ceil vale %g\n", ceil(Pi));
    printf ("M redondeado con ceil vale %g\n", ceil(M));
    printf ("El numero pi redondeado con floor vale %g\n", floor(Pi));
    printf ("M redondeado con floor vale %g\n", floor(M)); 
    printf ("-M redondeado con floor vale %g\n", floor(-M));
    printf ("El numero e vale %g\n", exp(1)); 
    printf ("El logaritmo neperiano de e vale %g\n", log(exp(1)));
    printf ("El logaritmo decimal de 100 vale %g\n", log10(100));
    printf ("La raiz cuadrada de 81 vale %g\n", sqrt(81));
    return 0;
}*/