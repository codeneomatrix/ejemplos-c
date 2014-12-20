/*
  program:10
  Name: triangulo de pascal.cpp
  Copyright:2009
  Author: josue acevedo maldonado
  Date: 25/11/09 10:57
  Description:muestra la piramide de pascal , mediante la formula (a!)/(b!*(a-b)!)
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long int fa (long int n){
   long  int f=1;
    for(long int i=1 ; i<=n; i++){
            f=f*i;
            }
    return f;
}
long int combinatoria(long int m,long int n){
    long int combinatoria;
    combinatoria=fa(m)/(fa(m-n)*fa(n));
    return combinatoria;
}
 main()
{
           int c ,a=1, k,i, r,n ;
           printf("ingrese el nivel :");
        scanf("%d",&r);
       for(i=0;i<=r;i++){
            for( k=0;k<=i;k++){
       printf ("  %ld ", combinatoria(i,k) ) ; }  
    printf("\n");
}         printf("\n");
    system("pause");
    return 0;
    }











