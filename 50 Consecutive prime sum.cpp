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

Problem 50
The prime 41, can be written as the sum of six consecutive primes:

41 = 2 + 3 + 5 + 7 + 11 + 13
This is the longest sum of consecutive primes that adds to a prime below one-hundred.

The longest sum of consecutive primes below one-thousand that adds to a prime, contains 21 terms, and is equal to 953.

Which prime, below one-million, can be written as the sum of the most consecutive primes?
***************


*/
uint8_t prime[1000000 + 1];
vector<int> primes;
void genPrime(int n){
    // generate prime
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = 0;
    for (int i = 2; i  < n; i++)
    {
        if (prime[i])
        {
            primes.push_back(i);
            for (int j = i * 2; j < n; j += i)
                prime[j] = 0;
            
        }
    }
}

uint64_t Consecutive_prime_sum(void)
{
    uint64_t n = 0, sum = 0, upper_limit = 1000000;
    genPrime(1e6);
    int mw=-1;
    
    for (int i = 0; i < primes.size(); i++){
        sum=0;
        for (int a = i; a < primes.size(); a++)
        {
            sum+=primes[a];
            
            if(sum>=upper_limit)                
                break;;
            
            if (prime[sum] &&  (a-i > mw))
            {
                mw= a-i;
                n= sum;
            }
        }
    }

    return n ;
}
 int main()
{
    cout << "Consecutive prime sum: " << Consecutive_prime_sum() << endl;
    // Problem 50 Consecutive prime sum: 997651

    return 0;
}

