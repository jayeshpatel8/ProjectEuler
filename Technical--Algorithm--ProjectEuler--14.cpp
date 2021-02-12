#### 14

#include <bits/stdc++.h>
using namespace std;
const long MAX_N = 5*1e6+1;
uint64_t DP[MAX_N];

long getTermCnt(long N){
    if (N<=1) return 0;
    if (DP[N]) return DP[N];
    if (N%2){
        uint64_t n = 3*N+1, count=1;
        while (n>MAX_N){
            if (n%2 == 0){
              
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
   n /=2;
            }
            else{
                 n = 3*n+1;
            }
            count++;
        }
        DP[N] =  ( count+  getTermCnt(n));     
    }
    else DP[N] = ( 1+  getTermCnt(N/2));    
    return DP[N]; 
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    
    cin >> n;
    vector<int> test;
    while (n--) {
        int v; cin >> v;
        test.push_back(v);
    }
    memset(DP,0, sizeof(DP));
    DP[1]=1;
    uint64_t c=1;
    for (int i=2; i<=MAX_N; i*=2)
        DP[i] = ++c;
    for (int i=3; i<=MAX_N; i++)
        getTermCnt(i);
        
    vector<uint64_t> DP_max(MAX_N);    
    DP_max[1]=1;
    for (long i=2; i<=MAX_N; i++)
    {
        if (DP[DP_max[i-1]] > DP[i])
            DP_max[i] = DP_max[i-1] ;
        else DP_max[i] = i ;
    }
          
    for (auto N : test)
        cout << DP_max[N]<<endl;;
    return 0;
}




