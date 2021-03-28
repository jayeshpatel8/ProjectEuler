#### 33 Digit cancelling fractions
#include <bits/stdc++.h>
using namespace std;
 int gcd(int a , int b){
 	if(b%a ==0) return a;
 	return (b%a,a);
 }
uint64_t Digit_cancelling_fractions( ){
/*
	(10n + c)/(10c + d) = n/d 
	where 
		c=cancelling Digit,  
		n =  nominator
		d = denominator
		n < d < c as c can be 1-9
		d (10n + c ) = n (10c +d)
		10dn +cd  = 10nc +nd
		9dn +cd  = 10nc
		9dn +cd  = 9nc + nc
		
		9n(c - d) = c (d - n) ==> c > d > n ==> n < d < c as c can be 1-9
		 c =  1..9
		 d =  1..c-1
		 n = 1..d-1
		 
	
*/
	int np,dp;
	np=dp=1;
	
	for (int c =1; c<=9; c++){
		for (int d =1; d<c; d++){
			for (int n =1; n<d; n++){
				//(10n + c)/(10c + d) = n/d 
				if ((10*n +c ) *d == (10* c+d)*n){
					np *=n; dp  *= d;
					cout << n <<" "<< d << ",";
				}
			}
		}
	}
	return dp/gcd(np,dp);

}
 int main()
{
	cout << "Digit cancelling fractions: " << Digit_cancelling_fractions() << endl; 
	/* Problem 33 Digit cancelling fractions: 100  [ 1 4, 2 5, 1 5, 4 8]
	The fraction 49/98 is a curious fraction, as an inexperienced mathematician in attempting to simplify it may incorrectly believe that 49/98 = 4/8, which is correct, is obtained by cancelling the 9s.

	We shall consider fractions like, 30/50 = 3/5, to be trivial examples.

	There are exactly four non-trivial examples of this type of fraction, less than one in value, and containing two digits in the numerator and denominator.

	If the product of these four fractions is given in its lowest common terms, find the value of the denominator.	
	*/
	return 0;
}


