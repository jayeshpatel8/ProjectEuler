#### 32 Pandigital products
#include <bits/stdc++.h>
using namespace std;
bool isPandigital(int m, int n, int p){
	int pan=0;
	while(m){
		int b  = 1<< (m%10);
		if(pan & b) return false;
		pan |=b;  m/=10; 
	}
	while(n){
		int b  = 1<< (n%10);
		if(pan & b) return false;
		pan |=b;  n/=10; 
	}	
	while(p){
		int b  = 1<< (p%10);
		if(pan & b) return false;
		pan |=b;  p/=10; 
	}	
	return (pan+1 == (1<<10)-1);
} 
uint64_t Pandigital_products( ){
	uint64_t sum=0;
	unordered_set<int> pan;
	for (int m = 4; m <=99; m++){
		for(int n=123; n<=9999; n++)
		{
			int p = m*n;
			if (isPandigital(m,n,p))
				pan.insert(p);
		}
	}
	for (auto p : pan) sum +=p;
	return sum;

}
 int main()
{
	cout << "Pandigital products: " << Pandigital_products() << endl; 
	// Problem 32 Pandigital products: 45228
	return 0;
}


