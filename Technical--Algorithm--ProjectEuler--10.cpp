#### 10

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if (n<4) return true;
	if (n%3 == 0) return false;
	if (n < 11) return true;
	
	for (int i=5; i*i <= n; i+=6){
		if (n%i == 0 || n%(i+2) == 0)  return false;
	}
	return true;
}
int main()
{
	unsigned long sum=2;
	long n =
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
 1000000*2;
	for (int c=3; c<n; c+=2){
		if (c%2 !=0 && isPrime(c))
			sum +=c;
	}
	cout << "Summation of primes " << " : " << sum << endl;
	//Summation of primes  : 142913828922
	return 0;
}




