#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, c, divisores; 
    
    do{
        printf("Introduzca el numero a determinar si es o no primo:\n");
        scanf("%d",&n);
    }while(!(n>=0)); /*He incluido un bucle do-while, para que el programa comience cuando le den un numero estrictamente positivo */
    
    divisores = 0; /*inicializo el contador divisores a 0 */
    
    for(c=2; c<=n/2; c++) /*Divido hasta n/2, porque superior a n/2 no hay divisores (digo yo...) */
    if (n%c == 0) divisores++; /*Si el resto es cero, aumento en uno el contador divisores*/
    
    if (divisores >= 1) printf ("%d no es primo\n", n); 
    else printf ("%d es primo\n",n);
    
    system("pause");
    return(0);
} // Probando
