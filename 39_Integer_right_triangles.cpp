#### 39 Integer right triangles
#include <bits/stdc++.h>
using namespace std;

#define N_LIMIT (int)1e6


uint64_t Integer_right_triangles(int n ){
/*
If p is the perimeter of a right angle triangle with integral length sides, {a,b,c}, there are exactly three solutions for p = 120.

{20,48,52}, {24,45,51}, {30,40,50}

For which value of p ≤ 1000, is the number of solutions maximised?


***************
a ^ 2 +b ^ 2 =c ^ 2 , a+b+c=p , p <= 1000
a+b+c <= 1000
a =0 , c = sqrt(a^2 + b^2)
0 + b  + sqrt( 0 + b ^ 2) <= 1000
2b <= 1000
b <= 500
so a, b < 500 as a,b cant  be zero
then find c and varify  ==> a ^ 2 +b ^ 2 =c ^ 2  & a+b+c=p
*/
	uint64_t sum=0;
	unordered_map<int,int> cnt;
	for(int a=1; a<n/2; a++) {
		for(int b=1; b<n/2; b++) {
			int c1  =  (a*a + b*b),c=sqrt(c1);
			int p = a+b+c;
			if( c*c ==c1 && p<=n )
				cnt[p]++;
		}
	}
	int max_cnt=0,p;
	for (auto [k,v]: cnt){
		if(max_cnt < v)
		max_cnt = v, p=k;
	}
	return p;

}
 int main()
{
	cout << "Integer right triangles: " << Integer_right_triangles(1000) << endl; 
	// Problem 39 Integer right triangles: 840
	return 0;
}


