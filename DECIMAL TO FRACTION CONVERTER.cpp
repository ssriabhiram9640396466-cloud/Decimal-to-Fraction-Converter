#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	for (int I=0; ;){
	//---------------------------
		int i=0, a_i=1 ;
		float a, a_o, a_n=0;
		printf("Enter a decimal value -- ");
		scanf("%f",&a_o);
		a=a_o;
	//	printf("%f\n",a);
	//	a_i= a;
	//	printf("%d",a_i);
		
		while (abs(a_n-a_i)>0){
			a=a*10;
			a_n=a;
			a_i=a;
			i++;
	//		printf(".");
		}
//		printf("Number of digits -- %d\n",i);
	//---------------------------------
		int r=pow(10,i), a_oo, a_o1, r_n=1, r_o, a_oo1;
		r_o=r;
		a_o1=round(a_o*(pow(10,i)));
	//	printf("--%d\n",a_o1);
		a_oo=(int)a_o1;
		a_oo1=a_oo;
		while(r_n!=0){
			r_n=r%a_oo;
			r=a_oo;
			a_oo=r_n;
			
	//		printf("%d\n",r_n);
	//		printf("%d\n",a_oo);
		}
	//	printf("%d\n",r);
	//----------------------------------
//		printf("%f",a_o);
//		printf(" <----------> ");
		printf("%d",a_oo1/r);
		printf("/");
		printf("%d\n",r_o/r);
	//-------------------------------------------
	printf("-------------------------------------\n");
	}
}