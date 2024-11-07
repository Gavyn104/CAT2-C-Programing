#include <stdio.h>

int main (){   
float hoursworked,h;
float hourlywage,w;
float grosspay,g;
float taxes,t;
float netpay,p;
float overtime,o;
float totalhour,th;

p=g*t/100;
printf("enter hours worked:\n");
scanf("%f",&h);

printf("enter hourly wage:\n");
scanf("%f",&w);
g=h*w;
printf("gross pay is %f\n",g);
if(h>40 ){ 
	 th=h*1.5;
	 g=th*w;
	printf("total hour is %f\n",th );
	printf("gross pay is %f\n",g);
	
}
	
	p=g*t/100;
	if(g<=600){
		t=15;
		p=g*t/100;
		printf("the net pay is %f\n",p);
		
	}
	else if(g>600){
		g=g-600;
		t=20;
		p=(g*t/100)+90;
		printf("the net pay is %f\n",p);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;	
}