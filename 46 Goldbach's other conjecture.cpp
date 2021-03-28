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
It was proposed by Christian Goldbach that every odd composite number can be written as the sum of a prime and twice a square.

9 = 7 + 2×12
15 = 7 + 2×22
21 = 3 + 2×32
25 = 7 + 2×32
27 = 19 + 2×22
33 = 31 + 2×12

It turns out that the conjecture was false.

What is the smallest odd composite that cannot be written as the sum of a prime and twice a square?
***************
n is compisite number = !prime
n = prime + 2 * x ^ 2
n - 2 * x ^ 2 = prime

*/
static int max_prime = 0; /// max is 1e6
bool isPrime(uint64_t p)
{
    static vector<bool> prime((int)1e6, true);

    if (p > max_prime){
        max_prime = 1e6;
            prime[0] = prime[1] = false;
        for (int i=2; i*i<=max_prime; i++){
            if (prime[i]){
                for (int k=2*i; k<=max_prime; k+=i){
                    prime[k]=false;
                }
            }
        }    
    }
    return prime[p];
}
uint64_t Goldbachs_other_conjecture()
{
	uint64_t n=35;

    for (; n<(int)1e6; n+=2 )
    {
        if (!isPrime(n)){ // compisite number
            uint64_t x = 2, k = 2;
            for (; n > k; x++)
            {
                if (isPrime(n-k))
                    break;
                k = 2 * x * x;
            }
            if (n<=k)
                return n;
        }
    }
    return n;
}
 int main()
{    
    cout << "Goldbach's other conjecture: " << Goldbachs_other_conjecture() << endl;
    // Problem 46 Goldbach's other conjecture: 5777
    return 0;
}

