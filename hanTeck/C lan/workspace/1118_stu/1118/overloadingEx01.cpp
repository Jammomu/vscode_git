#include <stdio.h>

void add(int a, int b);
void add(double a, double b);


void main(){
	add(1,4);
	add(1.2415,1.34124125999999);
}

void add(int a, int b){
	
	printf("%d + %d = %d\n",a,b,a+b);
}
void add(double a, double b){
	
	printf("%.4f + %.4f = %.2f\n",a,b,a+b);
}