#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double hipotenusa (double x ,double y )
{
   return(sqrt((x*x)+(y*y)));
 }

 main()
{
int cantidad,i;
double x,y;
printf("porfavor introdusca los lados con punto decimal\n");
printf ("cuantos triangulos son?");
scanf("%d" , & cantidad);
printf("TRIANGULO");
printf ("        LADO 1:");
printf("         LADO 2:");
printf("           hipotenusa:");
for (i=1; i<=cantidad; i++){

printf("\n");
printf("%5d" , i);

scanf("%lf" ,& x);

scanf("%lf" ,& y); 
printf("%60f ", hipotenusa (x,y));
}
printf("\n");
system("pause");
}
