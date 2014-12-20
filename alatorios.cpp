#include <stdio.h>
#include <stdlib.h>


	int x = 5345;
	int d=4;
	int n;
	int ni;
	int r[10];
	int ale=0;
	int factor[]={10000000,1000000,100000,10000,1000,100,10,1};
main()
{


	for(int i=0; i<100; i++){
		//printf ("%d \n",x);
		n=x*x;
	
		//printf ("%d \n",n);
		r[0] = n/10000000;
		n=n-(r[0]*factor[0]);
		r[1] = n/1000000;	
		n=n-(r[1]*factor[1]);	
		r[2] = n/100000;
		n=n-(r[2]*factor[2]);
		r[3] = n/10000;
		n=n-(r[3]*factor[3]);
		r[4] = n/1000;
		n=n-(r[4]*factor[4]);
		r[5] = n/100;
		n=n-(r[5]*factor[5]);
		r[6] = n/10;
		n=n-(r[6]*factor[6]);
		r[7] = n/1;
		
	
	
	for (int j=0; j<8; j++){
	//	printf("%d\n",r[j]);	
	}
 
 	
 	ni=2;
 	
 	for (int j=ni; j<6; j++){
 		
		ale=ale+(r[j]*factor[j]);
	//	printf("factorp:%d\n",r[j]*factor[j]);	
	//	printf("nu:%d\n",ale);
	}
 	//printf("numero previo:%d\n",ale);
 	ale=ale/factor[5];
 	//printf("factor:%d\n",factor[5]);
 	printf("numero aleatorio: 0.%d\n",ale);
    
    x=ale;
    n=0;
    ale=0;
    //printf("nuevo %d\n",x);
 	}
	
system("pause");	
return 0;
}
