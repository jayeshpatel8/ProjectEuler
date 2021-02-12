#### 20

#include <bits/stdc++.h>
using namespace std;
void multiply(vector<int>& m, int n){
	int c=0;
	for (int i=0; i<m.size(); i++){
		int mul = m[i]*n+c;
		m[i] = mul % 10;
		c  = mul/10;
	}
	while(c){
		m.push_back( (c % 10)  );
		c  = c/10;		
	}
}
int Factorialdigitsum(int n){
	std::vector<in
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
t> m ;
	
	m.push_back(1);
	for (int i=2; i<=n; i++)
		multiply(m,i);
	int sum=0;
	for (auto i : m){
		sum +=i;
	}
	return sum;
}
int main()
{

	cout << "Factorial digit sum " << " : " << Factorialdigitsum(100) << endl;
	//Factorial digit sum  : 648

	return 0;
}




