#### 28
#include <bits/stdc++.h>
using namespace std;
/*
21 22 23 24 25
20  7  8  9 10
19  6  1  2 11
18  5  4  3 12
17 16 15 14 13
*/
// 1 9  25 49  81
//   3   5  7 9  
uint64_t spiral_diagonals(int n){
	int sum=1,c=3;
	while(c<=n){
		sum += 4 *(c* c) - (6 * (c-1)); 
		c+=2;
	}
	return sum;
}
int main()
{
	int n=1001;
	//int n=5;
	cout << "Number spiral diagonals: " <<spiral_diagonals(n)<<endl; 
	// Number spiral diagonals: 669171001
	return 0;
}






