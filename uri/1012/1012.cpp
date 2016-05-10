#include <iostream>
#include <stdio.h> 
#include <math.h>
using namespace std;

#define PI 3.14159 

int main(){
	double a,b,c,ti,ci,q,ta,r;

	cin >> a >> b >> c;

	ti = (a*c)/2;
	ci = PI * c*c;
	ta = ((a+b)*c)/2;
	q = b*b;
	r = a*b;

	printf("TRIANGULO: %.3f\n",ti);
	printf("CIRCULO: %.3f\n",ci);
	printf("TRAPEZIO: %.3f\n",ta);
	printf("QUADRADO: %.3f\n",q);
	printf("RETANGULO: %.3f\n",r);


	
	return 0;
}
