#include <iostream>
#include <stdio.h> 
#include <cmath>
using namespace std;


int main(){
	int x;
	double y,total;

	cin >> x >> y;

	total = x/y;

	printf("%.3f km/l\n",total);
	
	return 0;
}
