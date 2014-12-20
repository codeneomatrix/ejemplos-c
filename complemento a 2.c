#include <stdio.h>
#include <stdlib.h>


void despliegaBits(int valor )
{ 
   int c; 

  
   int despliegaMascara = 1 << 31;

   printf( "%10d = ", valor );

   
   for ( c = 1; c <= 32; c++ ) { 
      putchar( valor & despliegaMascara ? '1' : '0' );
      valor <<= 1; 
      if ( c % 8 == 0 ) { 
         putchar( '   ' );
      } 

   } 

   putchar( '\n' );
} 


int main()
{ 
   int numero1; 

   int mascara; 
   int estableceBits; 
  
     printf("escriba el numero del que quiera obtener sus complementos:\n");
   scanf("%d" ,& numero1);
   printf( "\nEl complemento a uno de\n" );
   despliegaBits( numero1 );
   printf( "es\n" );
   despliegaBits( ~numero1 );
printf("\n El complemento a dos es\n");
 numero1= (~numero1 + 1);
    despliegaBits( numero1);
printf("\n");

system ("pause");
   return 0; 
} 


