#include <bits/stdc++.h>
using namespace std;


int sumofevenfib(int N){
	
	int sum=0;
	long n1=2,n2=0,n=2;
	
	for (int i=2; n<=N; i++){
		sum += n;
		n = 4*n1+n2;
		n2=n1;
		n1=n;
		
	}

	return sum;
}
int main()
{

	const int N = 1e6*4;
	cout << "sum of fib " << N << " : " << sumofevenfib(N)<< endl;
	return 0;
}
