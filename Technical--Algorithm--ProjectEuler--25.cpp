#### 25

#include <bits/stdc++.h>
using namespace std;

uint32_t getdigitCnt(uint32_t i){
	// F(i) = Phi ^ n / sqrt(5);
	//  =  1 + log(F(i)
	//  = 1 + log (Phi ^ n / sqrt(5))
	//  = 1 + n * log (phi) - log (sqrt(5))
	//  = 1 + n * log (phi) - log (5)/2
    static const   float logsq5 = log10(5)/2;
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

    static const   double lpsi = log10((1 + sqrt(5))/2);
    
    //uint32_t d = 1 + ((i * log10(psi)) - logsq5);
    return 1+ ((lpsi *i )- logsq5);
}
uint32_t Fibonacci_number_n_digit(uint32_t i){
	uint32_t l=1,r=i*10,m;
	while (l<r){
		m = l+(r-l)/2;
		uint32_t d = getdigitCnt(m);
		if (d<i) l = m+1;
		else r=m;
	}
	return l;
}
int main()
{
	uint32_t d =1000;
	uint32_t i = Fibonacci_number_n_digit(d);
	cout << d << "-digit Fibonacci number index" << " : " << i  << endl;
	//1000-digit Fibonacci number index : 4782

	return 0;
}




