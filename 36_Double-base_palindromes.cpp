#### 36 Double-base palindromes
#include <bits/stdc++.h>
using namespace std;

#define N_LIMIT (int)1e6


int generateBase10Pal(int x, int oddLen){
	int res = x;
	if (oddLen) x /= 10;
	while (x > 0){
		res = (res * 10) + x % 10;
		x /= 10;
	}
	return res;
}
bool checkBase2Pal(int t){
	int x=0,  n=t;
	while(n){
		x =  x << 1 | n &1;
		n>>=1;
	}
	return x==t;
}
uint64_t Double_base_palindromes( ){
/*
	generate number from 1- 999 (N_LIMIT-1)/2 Number in N_LIMIT
	create a palindromes and check for base2 palindromes
	Count sum if base2 is palindromes
*/
	uint64_t sum=0;
	int upper_bound = sqrt(N_LIMIT); // 999
	{
		for(int i=1; i <upper_bound; i++) {
			int base10 = generateBase10Pal(i, 0); // even len
			if(checkBase2Pal(base10)){
				sum +=base10;
			}
			base10 = generateBase10Pal(i, 1); // odd len
			if(checkBase2Pal(base10)){
				sum +=base10;
			}			
		}
	}
	
	return sum;

}
 int main()
{
	cout << "Double-base palindromes: " << Double_base_palindromes() << endl; 
	// Problem 36 Double-base palindromes: 872187
	return 0;
}


