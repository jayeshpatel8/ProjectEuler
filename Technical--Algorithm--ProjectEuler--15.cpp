#### 15
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> test;
    int i=0;
    while (i++<n) {
        int v; cin >> v;
        test.push_back(v);
        cin >> v;
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
uint64_t poewermod(uint64_t x, uint64_t y, int p){  // use square method to do exponentiation example: x^y =  (x^2)^(y/2)
   x =%p;
  if (x==0) return x;
  
  int64_t product=1;

  while (y>0){
    if (y&1){
       y--; // make it even
       product =(product* x) % p;       
    }
    y/=2;
    x=(x* x) % p;     //  do a squar til b becomes 1    
  } 
  return product;
}
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

        test.push_back(v);
    }    

    
    const int mod = 1e9 + 7;
    for (int t=0; t<test.size(); ){
        int n = test[t++]+1;
        int m = test[t++]+1;
        uint64_t dp[n][m];
        for (int i = 0; i < n; ++i) {
            dp[i][0] = 1;
        }
        for (int i = 0; i < m; ++i) {
            dp[0][i] = 1;
        }
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) ;//% mod;
            }        
        }
        cout << dp[n - 1][m - 1] << "\n";
    }
    return 0;
}




