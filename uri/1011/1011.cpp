#include <iostream>
#include <stdio.h> 
#include <math.h>
using namespace std;

#define PI 3.14159 

int main(){
	double v,r;

	cin >> r;

	v = pow(r,3)*(4.0/3)*PI;
	printf("VOLUME = %.3f\n",v);
	
	return 0;
}
