#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
//#include <cstdint>
using namespace std;

#define N_LIMIT (int)1e6

/*
The series, 1^1 + 2^2 + 3^3 + ... + 10^10 = 10405071317.

Find the last ten digits of the series, 1^1 + 2^2 + 3^3 + ... + 1000^1000.

***************
PowerMod = exponention by squaring and Mod

*/

#if 0 // GCC version
typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
uint128_t powerMod(uint128_t base, uint128_t exp, uint128_t mod)
{
    uint128_t res = 1;
    while(exp > 0){
    	
        if(exp & 1)
            res = (res * base) % mod;
        
        base = ((base  % mod) * (base % mod)) % mod;        
        exp >>=1;
    }
    return res;
}
uint64_t Self_powers(uint64_t e, uint64_t noOfDigit)
{
    uint128_t n, m = 1, sum = 0;

    for (int i=0; i<noOfDigit; i++) m*=10;
    
    for (n=1; n<=1000; n++)
    {
    	uint128_t k = powerMod(n, n, 10000000000);
        sum = ((uint128_t)sum + k)%m;
    }
    return sum ;
}
#endif
uint64_t multiMod(uint64_t a, uint64_t b, uint64_t m){
    a%=m;
    b%=m;
    if (a <= 0xFFFFFFFF && b <= 0xFFFFFFFF)
        return (a * b) % m;
    uint64_t countLeadingZeros=0, mod=m;
    while((mod & 1ULL<<63)==0){
        countLeadingZeros++;
        mod<<=1;
    }

    uint64_t MASK = (1<<countLeadingZeros) - 1, result=0;
    while(a>0 && b >0){
        result += (b & MASK) * a ;
        result %= m;
        b>>=countLeadingZeros;
        a<<=countLeadingZeros;
        a %= m;
    }
    return  result;
}
    uint64_t powerMod(uint64_t base, uint64_t exp, uint64_t mod)
{
    uint64_t res = 1;
    while(exp>0){
        if(exp & 1)
            res = multiMod(res , base, mod);

        base = multiMod(base , base, mod);
        exp >>=1;
    }
    return res;
}
uint64_t Self_powers(uint64_t e, uint64_t noOfDigit)
{
    uint64_t n, m = 1, sum = 0;

    for (int i=0; i<noOfDigit; i++) m*=10;
    
    for (n=1; n<=e; n++)
    {
        sum += powerMod(n, n, 10000000000);
        sum %= m;        
    }
   
    return sum ;
}
 int main()
{
    cout << "Self powers: " << Self_powers(1000, 10) << endl;
    // Problem 48 Self powers: 9110846700
    
    return 0;
}

