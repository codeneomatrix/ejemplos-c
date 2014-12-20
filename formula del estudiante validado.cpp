/*
  Program: 4
  Name: formula del estudiante validada.cpp
  Copyright: 2009
  Author: josue acevedo maldonado
  Date: 12/11/09 12:36
  Description: calcula la formula del estudiante y determina si la raiz es imaginaria o a es igual a 0. 
*/
#include <stdio.h>
#include <stdlib.h>
#include  <math.h>

int a,b,c;
float x1,x2,res2,res3,res1;

main (){

printf("INGRESE A:"); scanf("%d",&a);
printf("INGRESE B:"); scanf ("%d",&b);
printf("INGRESE C:");scanf("%d",&c);

if(a==0){
printf("\n\n\n\n\n\n\t ERROR FATAL\n\tA NO PUEDE SER CERO ");
}
else{
res1=(sqrt((pow(b,2))-(4*a*c)));
printf("%f",res1);
if (res1<=0){

printf("\n\n\n\n\n\n\n\tERROR FATAL \n     LA RAIZ ES IMAGINARIA");
}
else{
res2=((-b)+res1);

x1=res2/(2*a);
printf("\n\nX1=  %f",x1);

res3=((-b)-res1);

x2=res3/(2*a);
printf("\n\nX2=  %f",x2);
}
}

printf("\n\n\n\n\n");
system ("pause");
return 0;
}
