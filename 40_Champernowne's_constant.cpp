#### 40 Champernowne's constant
#include <bits/stdc++.h>
using namespace std;

#define N_LIMIT (int)1e6

/*
An irrational decimal fraction is created by concatenating the positive integers:

0.123456789101112131415161718192021...

It can be seen that the 12th digit of the fractional part is 1.

If dn represents the nth digit of the fractional part, find the value of the following expression.

d1 × d10 × d100 × d1000 × d10000 × d100000 × d1000000


***************
1-9 =9 
10-99 = 90 
100-999 = 10^3
10^3-9^3 = 10^4
10^4-9^4 = 10^5
10^5-9^5 = 10^6
 10^6 is limit

if n=1000 
 1000digit =  (9 - 2*90 - [3 * 1000 - n+1] )/ 100
*/
	int no_of_digit[] =  {1, 2,   3,    4,     5,      6};
	int cnt_digit[] =    {9, 180, 2700,36000,450000,54000000};
	int div_toget_MSdigit[] ={1,10,100,1000,10000,100000};
uint64_t getMSDigit(int digits){
	int i;
		if (digits<=9) return digits;
	int num=0;
	for(i=0; i< (sizeof(cnt_digit)/sizeof(int)); i++) {
		
		if (digits > cnt_digit[i]) 
			digits -= cnt_digit[i];
		else 
			break;
	}
	// calculate the number
	//     start num                 +   number from i digit len + 1 if not multiple of i digit length
	num = (div_toget_MSdigit[i] - 1) + (digits /no_of_digit[i])  + digits %no_of_digit[i] ;
	// get the digit from number
	return  ((num / div_toget_MSdigit[i +1 - digits %no_of_digit[i]]) % 10 );

}	
uint64_t Champernownes_constant(int n ){
	uint64_t product=1;
	string s="0";


	for (int i=1; i<=n; i*=10){
		int d = getMSDigit(i);
		product *= d;
	}
	
	return product;
}
 int main()
{
	cout << "Champernowne's constant: " << Champernownes_constant(1000000) << endl; 
	// Problem 40 Champernowne's constant: 210
	return 0;
}


