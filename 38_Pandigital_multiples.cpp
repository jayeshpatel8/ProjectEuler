#### 38 Pandigital multiples
#include <bits/stdc++.h>
using namespace std;

#define N_LIMIT (int)1e6


bool isPandigital(int n){
	int x=0;
	for (int i=0;  i<9; i++){
		x |= 1 <<(n % 10);	
		n /=10;
	} 
	return x==0b1111111110; // 0x3FE
}
uint64_t Pandigital_multiples(int n ){
/*
Take the number 192 and multiply it by each of 1, 2, and 3:

192 × 1 = 192
192 × 2 = 384
192 × 3 = 576
By concatenating each product we get the 1 to 9 pandigital, 192384576. We will call 192384576 the concatenated product of 192 and (1,2,3)

The same can be achieved by starting with 9 and multiplying by 1, 2, 3, 4, and 5, giving the pandigital, 918273645, which is the concatenated product of 9 and (1,2,3,4,5).

What is the largest 1 to 9 pandigital 9-digit number that can be formed as the concatenated product of an integer with (1,2, ... , n) where n > 1?


***************
we need to find pandigital > 918273645 => 9 * [1..5]
using 1 digit ==> 918273645 already provided in problem statement
using 2 digit > 91 [8273645] ==>  92 onwards not possible to achieve using 9 digit 
	example: 92*1=2d , (92*2)= 3d, (92*3)= 3d == 8d 
using 3 digit > 918 [273645]==>  921 onwards not possible to achieve using 9 digit 
	example: 921*1=3d , (921*2)= 4d, (921*3)= 4d == 12d 
using 4 digit > 9182 [73645]==>  9183 possible to achieve using 9 digit 	
	example: 9183*1=4d , (9183*2)= 5d, == 9d  so here [ (i * 1 ) << 5digit +  (i * 2) ]= Pandigital
	so our range of search is : 9182< n < 9876
*/
	uint64_t sum=0;
	
	for(int i=9876; i>=9183; i--) {
		int x = 100002 * i; // i * 1 * 100000 +  i * 2 
		if(isPandigital(x)) return x;
	}
	
	return n;

}
 int main()
{
	cout << "Pandigital multiples: " << Pandigital_multiples(918273645) << endl; 
	// Problem 38 Pandigital multiples: 932718654
	return 0;
}


