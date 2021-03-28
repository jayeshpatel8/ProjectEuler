#### 37 Truncatable primes
#include <bits/stdc++.h>
using namespace std;

#define N_LIMIT (int)1e6



uint64_t Truncatable_primes(int n ){
/*

*/
	uint64_t sum=0;
	
	bitset<N_LIMIT> sieve;
	sieve.set();
	sieve.reset(1);
	for(int i=2; i*i<N_LIMIT; i++){
		if (sieve[i]){
			for (int j=i*2; j<N_LIMIT; j+=i)
				sieve[j]=false;
		}
	}
	
	for(int i=23; n>0; i++) {
		
		if(sieve[i]){
			int div;
			// left /  right Truncatable primes check
			for (div=10; div<i; div *=10)
			{
				if (!sieve[i%div] || !sieve[i/div]) break;
			}				
			
			if(div>=i)
			{	sum +=i,n--;}
		}
	}
	
	return sum;

}
 int main()
{
	cout << "Truncatable primes: " << Truncatable_primes(11) << endl; 
	// Problem 37 Truncatable primes: 748317
	return 0;
}


