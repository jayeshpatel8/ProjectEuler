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
The number, 1406357289, is a 0 to 9 pandigital number because it is made up of each of the digits 0 to 9 in some order, but it also has a rather interesting sub-string divisibility property.

Let d1 be the 1st digit, d2 be the 2nd digit, and so on. In this way, we note the following:

d2d3d4=406 is divisible by 2
d3d4d5=063 is divisible by 3
d4d5d6=635 is divisible by 5
d5d6d7=357 is divisible by 7
d6d7d8=572 is divisible by 11
d7d8d9=728 is divisible by 13
d8d9d10=289 is divisible by 17
Find the sum of all 0 to 9 pandigital numbers with this property.
***************

*/

uint64_t Sub_string_divisibility()
{
	uint64_t sum = 0;
    int digits[] = {0,1, 2, 3, 4,5,6,7,8,9};
    int divisors[] = { 2, 3, 5, 7, 11, 13, 17 };
    
    do
    {
        int pos=0;
        bool found=true;
        int digits1[] = { 1,4,3,0,9,5,2,8,6,7 };
        int s = 100 * digits[pos] + 10 * digits[pos + 1] + digits[pos + 2];
        for (auto i : divisors){            
            ++pos;
            s =  (s%100)*10+ digits[pos+2];
            if (s % i != 0)
            {
                found = false; break;
            }
        }
        if(found){
            uint64_t s = 0;
            for (auto i : digits) s = s*10 + i;
            sum +=s;
            cout << s << " ";
        }
    }
    while(next_permutation(digits, digits + 10));
    cout <<endl;
    return sum;
}
 int main()
{
    cout << "Sub-string divisibility: " << Sub_string_divisibility() << endl;
    // Problem 43 Sub-string divisibility:16695334890
    return 0;
}
