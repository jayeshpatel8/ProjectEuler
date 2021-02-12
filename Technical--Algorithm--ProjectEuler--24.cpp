#### 24

#include <bits/stdc++.h>
using namespace std;

int fact(int i){
    if (i < 0) {
        return 0;
    }
     
    int p = 1;
    for (int j = 1; j <= i; j++) {
        p *= j;
    }
    return p;
}
long Lexicographic_permutations(){
	vector<int> num = {0,1,2,3,4,5,6,7,8,9};
	int n=1e6-1;

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
	long res=0;
	for (int i=9; i>0 & n>0; i--){
		int f = fact(i);
		int p=n/f;
		n %=f;
		res = res * 10 + num[p];
		num.erase(num.begin()+p);
	}
	for (auto i : num){
		 res = res*10 + i;
	}
	return res;
}
int main()
{
	cout << "Lexicographic permutations " << " : " << Lexicographic_permutations() << endl;
	//Lexicographic permutations  : 2783915460

	return 0;
}




