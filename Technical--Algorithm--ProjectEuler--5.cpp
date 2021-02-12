#### 5

#include <bits/stdc++.h>
using namespace std;
int gcd(int a , int b){
	while (b){
		int t=b;
		b = a % b;
		a =t;
	}
	return a;
}
//Largest palindrome product - 3dig
long SmallestMultiple20(){
	long lcm=2;
	for (int i=3; i<21; i++){
		lcm =(lcm/gcd(lcm,i))*i;
	}
	return (lcm);//232792560
}
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

int main()
{
	cout << "SmallestMultiple20 " << " : " << SmallestMultiple20()<< endl;
	return 0;
}



