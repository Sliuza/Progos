#include <cstdio>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
unsigned long long int inv(unsigned long long int a);


int main(){
	unsigned long int c[26];
	std::string P;
	unsigned long long int fat[1000],temp,den,num;
	fat[0] = 1;
	temp = 1000000007;
	while(std::getline (std::cin,P)){
		den = 1;
		for(int i = 0;i<26;i++){
			c[i]= 0;
		}
		for(int i = 0;i<P.length();i++){
			c[P[i]-65]++;
		}
		for(int i = 1;i<=1000; i++)
			fat[ i ] = (fat[ i - 1 ] * i) % temp;
		num = fat[P.length()-1];
		for(int i=0;i<26;i++){
			den *= fat[c[i]];
		}
		den = inv(den);
		cout << den << " \n";
		cout << num << " \n";
		num*=den;
		cout << num << " \n";
		num %= temp;
		cout << num << " \n";
	}

	return 0;

}
unsigned long long int inv(unsigned long long int a){
  unsigned long long int x;

  for(x=1;x<=1000000007;x++){
    if((a*x)%1000000007==1)
      return x;
  }

}
