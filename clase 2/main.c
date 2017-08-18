#include <stdio.h>
#include <stdlib.h>

int main()
{
   float acumulador;
   int numUsuario;
   int maximo;
   int minimo;
   char respuesta='s';
   maximo=numUsuario;
   minimo=numUsuario;
   acumulador=numUsuario;
   int cantidad=0;
   while(respuesta=='s')
   {

       printf("Ingrese un numero : ");
       scanf("%d",&numUsuario);
       maximo=numUsuario;
       minimo=numUsuario;
       acumulador=numUsuario;
       if(numUsuario<minimo)
       {
           minimo=numUsuario;
       }
       if(numUsuario>maximo)
       {
           maximo=numUsuario;
       }
       acumulador=numUsuario+acumulador;

     fflush(stdin);
    printf("Desea continuar? n/s");
    scanf("%c",&respuesta);
    cantidad++;

   }
  printf("El numero maximo es: %d \n",maximo);
   printf("El numero minimo es : %d \n", minimo);
   printf("El promedio es : %f \n",acumulador/cantidad);

return 0;

}

