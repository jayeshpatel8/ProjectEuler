#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;

#define N_LIMIT (int)1e6

/*
The first two consecutive numbers to have two distinct prime factors are:

14 = 2 × 7
15 = 3 × 5

The first three consecutive numbers to have three distinct prime factors are:

644 = 2² × 7 × 23
645 = 3 × 5 × 43
646 = 2 × 17 × 19.

Find the first four consecutive integers to have four distinct prime factors each. What is the first of these numbers?

***************
4 distinct digit =  2 *3*5*7 = 210

*/
static int max_prime = 0; /// max is 1e6
size_t GetPrimeFactor(uint64_t p)
{
    static vector<size_t> prime((int)1e6, 0);

    if (p > max_prime){
        max_prime = 1e6;            
        for (int i=2; i*i<=max_prime; i++){
            if (prime[i]==0){
                for (int k=2*i; k<=max_prime; k+=i){
                    prime[k]++;
                }
            }
        }    
    }
    return prime[p];
}
uint64_t Distinct_primes_factors(int length)
{
    uint64_t n = 2 * 3 * 5 * 7;

    for (; n<(int)1e6; )
    {
        if (length == GetPrimeFactor(n))
        {
            n++;
            if (length == GetPrimeFactor(n))
            {
                n++;
                if (length == GetPrimeFactor(n)){
                    n++;
                    if (length == GetPrimeFactor(n)) return n-3;
                }
            }
        }
        n++;
    }
    return n;
}
 int main()
{    
    cout << "Distinct primes factors: " << Distinct_primes_factors(4) << endl;
    // Problem 47 Distinct primes factors: 134043
    return 0;
}

