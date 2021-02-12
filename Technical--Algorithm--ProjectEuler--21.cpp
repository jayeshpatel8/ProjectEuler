#### 21

#include <bits/stdc++.h>
using namespace std;
int divisor_sum( int n){
	int sum=1;
	int sq = sqrt(n);
	for(int i=2; i<=sq; i++){
		if (n%i == 0) sum +=i+n/i;
	}
	return sum;
}
int Amicable_numbers(int n){
	std::map<int,int> m ;
	int sum=0;
	for (int i=2; i<=n; i++){
		int a = (m.find(i)== 
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
m.end())?m[i]=divisor_sum(i): m[i];
		if (a > i && a <= n) {
			int b = (m.find(a)== m.end())?m[a]=divisor_sum(a): m[a];
			if (i==b) {sum +=a+i; }
		}
	}
	return sum;
}
int main()
{
	cout << divisor_sum(220)<< " " <<divisor_sum(284) <<endl;
	
	cout << "Amicable numbers " << " : " << Amicable_numbers(10000) << endl;
	//Amicable numbers  : 31626

	return 0;
}




