#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define pass "root"
clock_t reloj,reloj2;
unsigned long int claves;
int mostrar()
{
    float tiempo;
    tiempo = ((float)reloj2-(float)reloj);//CLOCKS_PER_SEC; 
    printf("Clave encontrada \n");
    printf("Tiempo: %f\n",tiempo);
    printf("Claves usadas %ld",claves);
    exit(0);
    return 0;
}
int compara(char *cadena_a_comparar)
{
    return strcmp(cadena_a_comparar,pass);
}

int main()
{
    char base[]={'1','2','3','4','5','6','7','8','9','0','a','b','c','d','e',
     'f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x',
     'y','z'};
     
     int longitud=sizeof(base);
     char passwd[6];
     int k,h,g,f,d,s;
     claves=0;
     reloj=clock();
     passwd[1]='\0';
     for (k=0;k<=longitud;k++)
     {
         passwd[0]=base[k];
         claves++;
         if (compara(passwd)==0){
                                 reloj2=clock();
                                 mostrar();
                                 }
                                 }
     passwd[2]='\0';
     for (k=0;k<=longitud;k++){
     passwd[0]=base[k];
        for (h=0;h<=longitud;h++){
        passwd[1]=base[h];
        claves++;
        if (compara(passwd)==0){
                                 reloj2=clock();
                                 mostrar();
                                 }
                                 }
                                 }
     passwd[3]='\0';
     for (k=0;k<=longitud;k++){
     passwd[0]=base[k];
         for (h=0;h<=longitud;h++){
         passwd[1]=base[h];
         for (g=0;g<=longitud;g++){
             passwd[2]=base[g];
             claves++;
         if (compara(passwd)==0){
                                 reloj2=clock();
                                 mostrar();
                                 }
                                 }
                                 }
                                 }
     passwd[4]='\0';
     for(k=0;k<=longitud;k++){
         passwd[0]=base[k];
         for(h=0;h<=longitud;h++){
         passwd[1]=base[h];
         for(g=0;g<=longitud;g++){
         passwd[2]=base[g];
         for(f=0;f<=longitud;f++){
         passwd[3]=base[f];
         claves++;
          if (compara(passwd)==0){
                                 reloj2=clock();
                                 mostrar();
                                 }
                                 }
                                 }
                                 }
                                 } 
      passwd[5]='\0';
     for(k=0;k<=longitud;k++){
         passwd[0]=base[k];
         for(h=0;h<=longitud;h++){
         passwd[1]=base[h];
         for(g=0;g<=longitud;g++){
         passwd[2]=base[g];
         for(f=0;f<=longitud;f++){
         passwd[3]=base[f]; 
         for(d=0;d<=longitud;d++){
         passwd[4]=base[d];
         claves++;
         if (compara(passwd)==0){
                                 reloj2=clock();
                                 mostrar();
                                 }
                                 }
                                 }
                                 }
                                 } 
                                 }
     passwd[6]='\0';
     for(k=0;k<=longitud;k++){
         passwd[0]=base[k];
         for(h=0;h<=longitud;h++){
         passwd[1]=base[h];
         for(g=0;g<=longitud;g++){
         passwd[2]=base[g];
         for(f=0;f<=longitud;f++){
         passwd[3]=base[f]; 
         for(d=0;d<=longitud;d++){
         passwd[4]=base[d];
         for(s=0;s<=longitud;s++){
         passwd[5]=base[s];
         claves++;
         if (compara(passwd)==0){
                                 reloj2=clock();
                                 mostrar();
                                 }
                                 }
                                 }
                                 }
                                 } 
                                 }
                                 }  
                                 system("pause");            
     
     return 0;
     }
     
            
      



