#### 12

#include <bits/stdc++.h>
using namespace std;

int divisorUsingPrimefactorTau(int n){
	if (n==1) return 1;
	
	int i=2, num=n, p=1;
	
	for (;  i*i <= n; i++){
		int c=1;
		while(n%i == 0) c++,n/=i;
		p*=c;
	}
	if (n==num || n >1) p*=2;
	return p;
}
int main()
{
	int n=1,x=500, d=1;
	for ( ;
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
uint64_t poewermod(uint64_t x, uint64_t y, int p){  // use square method to do exponentiation example: x^y =  (x^2)^(y/2)
   x =%p;
  if (x==0) return x;
  
  int64_t product=1;

  while (y>0){
    if (y&1){
       y--; // make it even
       product =(product* x) % p;       
    }
    y/=2;
    x=(x* x) % p;     //  do a squar til b becomes 1    
  } 
  return product;
}
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 (divisorUsingPrimefactorTau(d)) <= x; ){
		n++; d+=n;
	}
	cout << "Highly divisible triangular number " << " : " << d << endl;
	//Highly divisible triangular number  : 76576500
	return 0;
}




