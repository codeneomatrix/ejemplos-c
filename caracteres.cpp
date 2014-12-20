/*
  program: 11
  Name: carateres.cpp
  Copyright: 2009
  Author: josue acevedo maldonado
  Date: 03/12/09 11:12
  Description: este programa muestra todos los caracteres del codigo ASCII
*/

#include <stdio.h>
#include <stdlib.h>

int a;
main(){
       
       printf("\tBienvenido,\n");
       printf("este programa muestra los caracteres del codigo ASCII\n");  
       for (a=0;a<=250;a++){
       printf ("%c           ",a);
       }
       printf("\n\n");
       system ("pause");
       return 0;
   }
