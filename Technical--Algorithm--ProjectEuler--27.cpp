#### 27
#include <bits/stdc++.h>
using namespace std;
#define ABU_MAX 28123 
bool isPrime(int n){
	if (n<2) return false;
	if (n<4) return true;
	if(n%2 == 0) return false;
	if (n%3 == 0) return false;
	if (n<10) return true;
	for (int i=5; i*i<=n; i+=6){
		if (n%i ==0 || n%(i+2)==0) return false;

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
	}
	return true;
}


int64_t  Quadratic_primes(int n){
	int m=0,a=0,b=0;
	for (int i=-n+1; i<n; i++){
		for (int j=-n; j<=n; j++){
			int k=0;
			while(isPrime(k*(k+i)+j)) k++;
			if (m<k){
				m=k;
				a=i,b=j;
			}
		}
	}
	
	return a*b;
}
int main()
{
	cout << "Quadratic primes: " << Quadratic_primes(1000)<<endl; 
	// Quadratic primes: -59231
	return 0;
}




