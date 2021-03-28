#### 30 Digit fifth powers: 443839
#include <bits/stdc++.h>
using namespace std;


uint64_t Digit_fifth_powers(){
	int power5[10];
	
	for (int i=0; i<=9; i++){
		power5[i] = i * i * i* i *i;
	}
	int upperbound = 6 * (power5[9]);  // try to find upper bound ie max digits in   [ n * (9 ^ 5) ] = n  6..8 --> total digits are 6 
	long ans=0;
	for (int i=32; i<=upperbound; i++ ){
		int n=i,  sum=0;
		while(n>0){
			sum += power5[n%10];
			n /= 10;
		}
		if(sum == i) ans += sum;
	}
	return ans;

}
int main()
{
	cout << "Digit fifth powers: " <<Digit_fifth_powers()<<endl; 
	// Problem 30 Digit fifth powers: 443839
	return 0;
}


