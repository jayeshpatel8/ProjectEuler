#### 13
#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    vector<string> A(n);
    string r;
    int i=0;
    while (i<n)
            cin >> A[i++];            
    int c=0;
    for
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
 (i=49; i>=0; i--){
        int s=0;
        for (int j=0; j<n; j++ ){
             
            s+=A[j][i]-'0';
        }
        s +=c;
        r+=(s%10 + '0');
        c = s/10;
    }
    while (c){
        r+=(c%10 + '0');
        c /=10;
    } 
    int j = r.size();
    for (i=0; i<10; i++)
        cout << r[--j];
    return 0;
}




