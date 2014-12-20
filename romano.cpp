/*
  program:9
  Name:romano.cpp 
  Copyright: 2009
  Author: josue acevedo maldonado
  Date: 03/12/09 11:16
  Description: este programa trasforma los numeros decimales a numeros romanos 
*/
#include <stdio.h>
#include <stdlib.h>

int a,b,c,d,i;
main()   {
        printf("este programa trasforma un numero decimal a uno romano \n");
       printf("ingresa el numero:  ");  
       scanf("%d", &a);  
         printf("\n");
         b=a/1000;
        c=a/100;
       c=c-(b*10);
       d=a/10;
       d=d-(b*100);
       d=d-(c*10);
       a=a-(b*1000);
       a=a-(c*100);
       a=a-(d*10);   
      if (b>=1){
                      for(i=1;i<=b;i=i+1){
                      printf("M");
         
                      }
                      }              
                if(c==9) {
                         printf("CM");
                         }    
      if (c>=5){
                if(c<=8){
           printf("D");      
                      }
                      }              
                 if (c>=6){
                           if (c<=8){
                           for(i=6;i<=c;i++){
                               printf("C");
                                            } 
                                            } 
                                            }                        
         if(c==4){
                  printf("CD");
                  }           
        if (c>=1){
                  if (c<=3){
                           for(i=1;i<=c;i++){
                               printf("C");
                                            } 
                                            }                  
                                            }
                          if (d==9){
                         printf("XC");
                             }    
                         if (d>=5){
                          if(d<=8){
           printf("l");      
                      }            
                      }  
                 if (d>=6){
                           if (d<=8){
                           for(i=6;i<=d;i++){
                               printf("X");
                                            } 
                                            } 
                                            }                        
                  if(d==4){
                  printf("XL");
                  }           
        if (d>=1){
                  if (d<=3){
                           for(i=1;i<=d;i++){
                               printf("X");
                                            } 
                                            }                  
                                            }
                         if (a==9){
                      printf("IX");
                             }    
                           if (a>=5){
                          if(a<=8){
           printf("V");      
                      }            
                      }  
                 if (a>=6){
                           if (a<=8){
                           for(i=6;i<=a;i++){
                               printf("I");
                                            } 
                                            } 
                                            }                        
         if(a==4){
                  printf("IV");
                  }           
        if (a>=1){
                  if (a<=3){
                           for(i=1;i<=a;i++){
                               printf("I");
                                            } 
                                            }                  
                                            }
          printf("\n\n"); 
         system("pause");
         return 0;
         
         }
