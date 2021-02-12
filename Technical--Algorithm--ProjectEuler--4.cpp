#### 4

#include <bits/stdc++.h>
using namespace std;

//Largest palindrome product - 3dig
int LargestPalProduct(){
	// i * j = Pal , 
	// i >= sqrt(pal) && i <= 999 Large Part of product
	// j  <= sqrt(pal) && >= 999  Small Part of product
	// 999*999 = 998001 -> pal 997799 -> sqrt(997799) = 952

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
	// i =  999-952
	// j= 100-952

	for (int p=997; p>111; p--){
		string str = to_string(p);reverse(str.begin(),str.end());
		int pal = stoi(to_string(p)+str);
	
		for (int i=997; i>=952; i--){
			if (pal / i > 952 || i*i < pal) break;
			if (pal % i == 0)  return pal;
		}
	}
	return -1;
}
int main()
{
	cout << "Largest palindrome product - 3dig " << " : " << LargestPalProduct()<< endl;
	return 0;
}



