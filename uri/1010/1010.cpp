#include <iostream>
#include <stdio.h> 
using namespace std;
 
int main() {
 	int x1,x2,y1,y2;
 	float z1,z2,t;
 	cin >> x1 >> y1 >> z1;
 	cin >> x2 >> y2 >> z2;

 	t = y1*z1 + y2*z2;

 	printf("VALOR A PAGAR: R$ %.2f\n",t);
   
    return 0;
}