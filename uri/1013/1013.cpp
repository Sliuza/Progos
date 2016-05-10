#include <iostream>
#include <stdio.h> 
#include <cmath>
using namespace std;


int main(){
	int a,b,c,maiorAB,maiorN;

	cin >> a >> b >> c;

	maiorAB = (a+b+abs(a-b))/2;
	maiorN = (maiorAB+c+abs(maiorAB-c))/2;
	
	cout << maiorN << " eh o maior" << endl;

	
	return 0;
}
