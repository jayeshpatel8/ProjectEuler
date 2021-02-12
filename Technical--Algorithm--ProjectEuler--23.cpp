#### 23
#include <bits/stdc++.h>
using namespace std;
#define ABU_MAX 28123 
bool isAbudant(int n){
	int s=1,sq = sqrt(n);
	if (sq*sq == n) s+=sq--;
	
	for (int i=2; i<=sq;i++){
		if (n%i ==0){
			s +=i+n/i;
			if (s>n) return true;
		}
	} 
	return s>n;
}
uint64_t  NonAbundantSum(){
	
	vector<int> 
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
Anum;
	unordered_set<int> AnumSum;
	for (int i= 12; i<=ABU_MAX; i++){
		if (isAbudant(i)) Anum.push_back(i);
	}
	
	for (int i=0; i<Anum.size(); i++){
		for (int j=i; j<Anum.size(); j++){
			uint32_t s = Anum[i]+Anum[j];
			if (s<=ABU_MAX ) AnumSum.insert(s);
			else break;
		}
	}
	uint64_t	res=0;
	for (int i=1; i<ABU_MAX; i++)
	{
		if (AnumSum.find(i) == AnumSum.end()) res +=i;
	}
	
	return res;
}
int main()
{
	cout << "Non-abundant sum: " << NonAbundantSum()<<endl; 
	return 0;
}




