#### 31 Coin sums
#include <bits/stdc++.h>
using namespace std;

int coins[8] = {1, 2, 5, 10, 20, 50, 100, 200};

int DP[200][8]={};
uint64_t Coin_sums( int target, int i){
	if (i<0|| target<0) return 0;
	if (target == 0) return 1;
	
	if(DP[target][i]!=0) return DP[target][i];
	int ans=0;
	for (; i>=0; i--){
		int n = coins[i];
		
		while( n<=coins[i]){
			ans += Coin_sums(target-n, i);
			n +=coins[i]; 
		}
	}
	return DP[target][i]=ans;

}

int coins[8] = {1, 2, 5, 10, 20, 50, 100, 200};

int DP2[201]={};
uint64_t Coin_sums2( int target, int i){

		DP2[0]=1;
	for (int coin = 0; coin <=7; coin++){
		for(int t=coins[coin]; t<=200; t++)
		{
			if (t >= coins[coin])
				DP2[t] +=  DP2[t-coins[coin]];
			
		}
	}
	return DP2[200];

}
int main()
{
	//int coins[8] = {1, 2, 5, 10, 20, 50, 100, 200};
	cout << "Coin sums: " << Coin_sums(200,7) << endl; 
	// Problem 31 Coin sums: 73682
	
	return 0;
}


