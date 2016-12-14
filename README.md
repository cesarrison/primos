//# primos
//comprueba si un número es primo

{

int num1,i,a;

a=0; */Esta variable se utiliza para contar los divisores del número introducido, se inicializa a 0*/

printf("Introduce un numero: ");
scanf("%d",&num1);

for(i=1;i<=num1;i++)
{
    if(num1%i==0) // si num1 módulo de i es 0, incrementamos a en 1.
    a++;
}


if(a==2); /*Si al final del bucle, a vale 2, el número es primo, porque tiene solamente 2 divisores.
{
    printf("El número es primo");
}
else
{
    printf("El número no es primo"); 
}


}
