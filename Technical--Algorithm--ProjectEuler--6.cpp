#### 6
// Type your code here, or load an example.
#include <bits/stdc++.h>
using namespace std;
#include<iostream> 
#include<cmath> 
  

  
// Driver Code   
int main () 
{ 
  int n = 100; 

   // sum of n a =  n*(n+1)/2
  // sum of n2 = n*(n+1) (2n+1) / 6
 //  diff  b =  a * (a - (2*n+1)/3 )

  
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
  int a = n * (n+1) / 2 ;
    int b  =  a * (a - ( (2*n + 1)/3));
    std:: cout << a << " " << b << "\n";
  return 0; 



