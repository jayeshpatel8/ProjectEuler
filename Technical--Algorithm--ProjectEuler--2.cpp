#### 2

#include <bits/stdc++.h>
using namespace std;


int sumofevenfib(int N){
	
	int sum=0;
	long n1=2,n2=0,n=2;
	
	for (int i=2; n<=N; i++){
		sum += n;
		n = 4*n1+n2;
		n2=n1;
		n1=n;
		
	}

	return sum;
}
int main()
{

	const int N = 1e6*4;
	cout << "sum of fib " << N << " : " << sumofevenfi
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
b(N)<< endl;
	return 0;
}



