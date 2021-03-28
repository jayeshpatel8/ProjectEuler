#### 35 Circular primes
#include <bits/stdc++.h>
using namespace std;

#define N_LIMIT (int)1e6



uint64_t Circular_primes( ){
/*
	get the primes by Sieve of Eratosthenes
	check for ciruculr prime
	Count it
*/
	uint64_t cnt=0;
	bitset<N_LIMIT+1> prime;
	prime.set();
	
	for(int i=2; i*i<=N_LIMIT; i++) {
		if(prime[i]){
			for(int j=i*2; j<N_LIMIT; j+=i){
				prime[j]=false;
			}
		}
	}
	
	cnt = 13;  // this is from problem statement There are thirteen such primes below 100: 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.
	for (int i =100 ; i <N_LIMIT; i++){
		if(prime[i] ){
			// Check CicularPrime
			int nLen = 1 + log10(i);
			int n = i,p;
			for (p=1; p<nLen; p++){
				n = (n%10)*(pow(10,nLen-1))+(n/10);
				if(n < N_LIMIT && !prime[n]) break;
			}	
			if (p == nLen){
				cnt++;
			}
		}
	}
	return cnt;

}
 int main()
{
	cout << "Circular primes: " << Circular_primes() << endl; 
	// Problem 35 Circular primes: 55
	return 0;
}


