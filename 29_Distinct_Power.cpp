#### 29 Distinct Power
#include <bits/stdc++.h>
using namespace std;

  bool isPerfectPower(int n, int a){
    for (int i=2; i<n && i<=a; i++){
        if (n%i == 0){
            int j=n;
            while ((j%i ==0 )&& j>i){
                j = j/i;
            }
            if  (j == i) return true;
            else false;
        }
    }
    return false;
  }
uint64_t Distinct_powers(int a, int b){
    int powers[11][1000]={0}  ;  // [2-10][2^2 - 64^100=(2^6)^100=2^600, 3^2...81^100]
    int repeat=0;
    for (int i=2; i*i<=a; i++){
        // i => power
        if (!isPerfectPower(i,a)){
            for (int j=2;  j<=b; j++){
                powers[i][j]=1;
            }
            //  [2^2 -- 64^100]i* (i* [1..100])
            for (int base=i*i,k=2;  base<=a; base*=i,k++){

                for (int j=2,p=k*2;  j<=b; p+=k,j++){
                    if (powers[i][p]) repeat++;
                    else
                        powers[i][p]=1;
                }
            }
        }
    }

    return (a-1)*(b-1)-repeat;

}
int main()
{
    int a=100;
    //int a=5,b=5;
    cout << "Distinct powers: " <<Distinct_powers(a,a)<<endl;
    // Problem 29 Distinct powers: 9183
    return 0;
}

