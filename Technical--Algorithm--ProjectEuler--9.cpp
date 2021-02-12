#### 9

#include <bits/stdc++.h>
using namespace std;

int main()
{
/*
a + b + c = n.
means  =  a < b  < c, as a^2 + b^2 = c^2 
(a+b)^2 = (n - c)^2
1)
	2ab =  (n-c)^2 - c^2 = n^2 - 2nc 
2)
  (a-b)^2 = c^2 -2ab
  (a-b) = X = sqrt (c^2 -n^2 + 2nc)
3)
	(a+b) +(a-b) = (n - c) + X
	a = ((n - c) + X) / 
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
2
	b = n-c-a

*/ 
	int a,b,c;
	int abc;
	int a_b;
	int n=1000;
	int n2=n*n;
	int n_2=n*2;
	//(a-b) = a_b = sqrt (c^2 -n^2 + 2nc)	 = c (c + 2n) - n^2
	for (c=n/2-1; c>n/3; c--){
		a_b = (c * c)  - n2 + n_2*c;
		int sq = floor(sqrt(a_b));
		if (sq * sq == a_b){
			//a = (n - c + sqrt(a_b) / 2
			a = (n - c + sq) / 2;
			b = n - c -a ;
			break;
		}
	}
	cout << "Special Pythagorean triplet " << " : " << a*b*c << " a: " << a  << " b: " << b  << " c: " << c << endl;
	
//Special Pythagorean triplet  : 31875000 a: 375 b: 200 c: 425
	return 0;
}





