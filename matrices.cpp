/*
  program:16
  Name: matrices.cpp
  Copyright: 2009
  Author: josue acevedo maldonado
  Date: 05/12/09 19:53
  Description: este programa hace operaciones matricales
*/
#include <stdio.h>
#include <stdlib.h>

int n [3][3];
int n1 [3][3];
int n2[3][3];
int n3 [3][3];
int n4 [3][3];
int i,j,x,z;

main(){
       printf("este programa hace operaciones con matrices de 3 X 3, como:\n");
       printf("suma , resta  y multiplicacion \n\n\n");
       printf("ingrese la matriz 1:\n");
       for (i=0;i<=2;i++){
       for (j=0;j<=2;j++){
               scanf("%d",&n[i] [j]);
        }
          }
              printf("\n\n");
       printf("ingrese la matriz 2: \n");
        for (i=0;i<=2;i++){
       for (j=0;j<=2;j++){
               scanf("%d",&n1[i] [j]);
              }
             }
       printf("\n la suma de la matriz 1 y 2 es: \n");
        for (i=0;i<=2;i++){
       for (j=0;j<=2;j++){
      n2[i][j]=n[i][j]+n1[i][j];
                  }
       printf("\n");
       }
       for (i=0;i<=2;i++){
       for (j=0;j<=2;j++){
               printf("  %d",n2[i] [j]);
              }
       printf("\n");
       }
        printf("\n");
   printf("\n la resta de la matriz 1 y 2 es: \n");
       for (i=0;i<=2;i++){
       for (j=0;j<=2;j++){
      n4[i][j]=n[i][j]-n1[i][j];
                 }
       printf("\n");
       }
       for (i=0;i<=2;i++){
       for (j=0;j<=2;j++){
               printf("  %d",n4[i] [j]);
              }
       printf("\n");
       }
        printf("\n");
     printf("\n la multiplicacion  de la matriz 1 y 2 es: \n\n\n\n");   
                 for (j=0;j<=2;j++){
                 for (i=0;i<=2;i++){
      n3[j][i]=(n[j][0]* n1[0][i])+ (n[j][1]*n1[1][i]) + (n[j][2]*n1[2][i]);
              }
       }
       for (i=0;i<=2;i++){
       for (j=0;j<=2;j++){
               printf("  %d",n3[i] [j]);
              }
       printf("\n");
       }  
         printf("\n\n\n\n");
        system("pause");
       return 0;
              }
