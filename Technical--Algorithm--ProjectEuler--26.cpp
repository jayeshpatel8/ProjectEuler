#### 26
#include <bits/stdc++.h>
using namespace std;
#define ABU_MAX 28123 
bool isPrime(int n){
	if (n%3 == 0) return false;
	if (n<10) return true;
	for (int i=5; i*i<=n; i+=6){
		if (n%i ==0 || n%(i+2)==0) return false;
	}
	return true;
}
int pow_mod(int n , int b , int m){
	int x=1,y=n;
	while
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
(b>0){
		if(b%2){
			x = (x*y) %m;
		}
		y = (y*y) %m;
		b /=2;
	}
	return x%m;
}
int FullReptendPrime(int p){
	int d=1;
	for (int k=1; k<p; k++){
		if (pow_mod(10,k,p)!=1) d++;
		else break;
	}
	return d;
}
uint64_t  Reciprocal_cycles(int n){
	// Full Reptend Prime on Wolfram Mathword.	
	// 10^k = 1 mod n where n is Full Reptend Prime 
	// 10 100 1000 10000 .. = [3, 2, .. 1] mod 7
	// p-1 divisor for Full Reptend Prime [3, 2, .. 1] first one is the last divisor (p-1 index)
	// Non Full Reptend Prime [3,1, 2, .. 1] first one is not the last divisor (p-1 index)
	// Full Reptend Prime  [7, 17, 19, 23, 29, 47, 59, 61, 97, 109, 113,..]
	// For N < 7 edge cases: 3 is 
              if (n<7) return 3;
	int m=0;
	for (int i=2; i<n; i++){
		if (i%2 && isPrime(i)){
			int d = FullReptendPrime(i);
			if (m < d) m = d;
			//cout << i << " ";
		}
	}
	
	return m+1;
}
int main()
{
	cout << "Reciprocal cycles: " << Reciprocal_cycles(1000)<<endl; 
	// Reciprocal cycles: 983
	return 0;
}




