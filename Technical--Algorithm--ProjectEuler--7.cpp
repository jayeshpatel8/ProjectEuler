#### 7

#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	if (n<2) return false;
	//if (n%2 == 0) return false;
	if (n<9) return true;
	if (n%3 == 0) return false;
	for (int i=5; i*i <= n; i+=6){
		if (n%i == 0) return false;
		if (n%(i+2) == 0) return false;
	}
	return true;
}
i
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
nt prime(void){
	int cnt=1;
	int i=0;
	while (cnt<10001){
		i++;
		while (i%2 ==0 || isPrime(i) == 0) i++;
		cnt++;
	}
	return i;
}
int main()
{
	cout << "10001st prime " << " : " <<prime()<< endl;
	//10001st prime  : 104743

	return 0;
}



