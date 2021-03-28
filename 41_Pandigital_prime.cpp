#### 41 Pandigital prime
#include <bits/stdc++.h>
using namespace std;

#define N_LIMIT (int)1e6

/*
We shall say that an n-digit number is pandigital if it makes use of all the digits 1 to n exactly once. For example, 2143 is a 4-digit pandigital and is also prime.

What is the largest n-digit pandigital prime that exists?


***************
if sum of digits divisible by 3 means number is also divisible by 3 so not a prime
2 digit pandigital = 1+2 = 3 so its not
3 digit pandigital = 1+2+3 = 6 so its not
4 digit pandigital = 1+23+4 = 10 let try
...

only 1,4,7 length  is in search space
*/
bool visited[10];
bool checkPrime(int n){
	if (n<2) return false;
	if (n<4) return true;
	if (n%2==0 || (n%3==0)) return false;
	if (n<8) return true;
	for (int i=5; i*i<=n; i+=6){
		if (n%i==0 || (n%(i+2)==0)) return false;
	}
	return true;
}
int generatePandigital_and_checkPrime(int len, int n,int digit){
	if (len<=0){
		if(checkPrime(n)) return n;
		return 0;
	}
	int num = n* 10;
	for (int i=digit; i>0; i--){
		if (!visited[i]){
			visited[i]=true;
			int n_new = generatePandigital_and_checkPrime(len-1,num+i,digit);
			if (n_new!=0) return n_new;
			visited[i]=false;
		}
	}
	return 0;
}
uint64_t Pandigital_prime(int n ){
	uint64_t sum=0;
	bool numLen[10]={};
	for (int i=1; i<10; i++){
		sum+=i;
		numLen[i] = sum%3;
		
	}
	memset(visited,0,sizeof(visited));
	for (int i=9; i>0; i--){
		if(numLen[i]){
		
			int num = generatePandigital_and_checkPrime(i,0,i);
			if (num) return num;
		}
	}

	return 0;
}
 int main()
{
	cout << "Pandigital prime: " << Pandigital_prime(9) << endl; 
	// Problem 41 Pandigital prime: 7652413
	return 0;
}


