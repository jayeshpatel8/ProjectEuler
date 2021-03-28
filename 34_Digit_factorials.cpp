#### 34 Digit factorials
#include <bits/stdc++.h>
using namespace std;

uint64_t Digit_factorials( ){
	uint64_t sum=0;
	int fact[10];
	fact[0]=1;fact[1]=1;
	for(int i=2; i<10; i++) fact[i]  = fact[i-1]*i;
/*
145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.

Find the sum of all numbers which are equal to the sum of the factorial of their digits.

Note: As 1! = 1 and 2! = 2 are not sums they are not included.

10^d-1 < d*n < 10^d
10^d-1 < d*9! < 10^d
d-1 * log10 < logd + log9! < d log10
d-1  < logd + log9! < d 
d-1 -logd < 5.56 < d- logd
d -logd < 5.56 + 1 < d- logd +1
d - log (6) < 6.56 < d - log(6) + 1
d < 7.xx < d +1 

or


	9!	=	362880
	6×9 !=	2177280 (a 7-digit number)
	7×9 !=	2540160 (a 7-digit number)
	8×9 !=	2903040 (a 7-digit number)
	
	upper bound is 7 digit num
*/	
	for (int i = 10; i <=2540160; i++){
		int fsum =0,n=i;
		while(n>0)
		{
			fsum += fact[n%10];
			 n /= 10;
		}
		if (fsum == i) sum+=i;
	}
	return sum;

}
 int main()
{
	cout << "Digit factorials: " << Digit_factorials() << endl; 
	// Problem 34 Digit factorials: 40730
	return 0;
}


