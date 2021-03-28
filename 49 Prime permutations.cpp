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
Prime permutations
Problem 49
The arithmetic sequence, 1487, 4817, 8147, in which each of the terms increases by 3330, is unusual in two ways: (i) each of the three terms are prime, and, (ii) each of the 4-digit numbers are permutations of one another.

There are no arithmetic sequences made up of three 1-, 2-, or 3-digit primes, exhibiting this property, but there is one other 4-digit increasing sequence.

What 12-digit number do you form by concatenating the three terms in this sequence?

***************
diff = 3330
upper bound = 9999- 2*3330 = 3339

*/
uint8_t prime[10000];
void genPrime(int n){
    // generate prime
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i < n; i++)
    {
        if (prime[i])
        {
            for (int j = i * 2; j < n; j += i)
                prime[j] = 0;
        }
    }
}
bool isPerm(int a , int b ,int c){
    int digits[3][10]={0};
    while(a>0 ){
        digits[0][a%10]++;
        digits[1][b % 10]++;
        digits[2][c % 10]++;
        a /= 10;
        b /= 10;
        c /= 10;
    }
        
    for (int i=0; i<10; i++)
    {
        if ((digits[0][i] != digits[1][i]) || (digits[0][i] != digits[2][i]))
            return false;
    }

     return true;
}
uint64_t     Prime_permutations(void)
{
    uint64_t n, upper_limit = 3339+1, diff = 3330;
    genPrime(10000);

    for (int a = 1487+1; a < upper_limit; a++)
    {
        if(prime[a]){
            int b = a + diff, c = b + diff;
            if (prime[b] && prime[c] && isPerm(a,b,c))
            {
                n = ((uint64_t)a * 10000 + b) * 10000 + c;
                
                break;
            }
        }
    }

    return n ;
}
 int main()
{
    cout << "Prime permutations: " << Prime_permutations() << endl;
    // Problem 49 Prime permutations: 296962999629

    return 0;
}

