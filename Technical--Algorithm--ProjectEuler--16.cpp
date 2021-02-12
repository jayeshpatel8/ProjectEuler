#### 16

#include <bits/stdc++.h>
using namespace std;

vector<int> mulvec(vector<int> &a, vector<int> &b){
	int a_sz = a.size(), b_sz = b.size();
	vector<int> r;
	int j=-1,k;
	for (int s=0; s<b_sz; s++ ){
		int c=0,bi=b[s]; 
		k=++j;
		for (int i=0; i<a_sz; i++){
			if (r.size()<=k) 
			{
				int 
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
m = a[i] * bi + c;
				c = m/10;
				m %=10;		
				r.push_back(m);
			}
			else{
				int m = a[i] * bi + c + r[k];
				c = m/10;
				r[k] =m%10;		
			}
			
			k++;
		}
		if (c){
			if (k >= r.size())
				r.push_back(c);
			else{
				++s;
				while (c && k<r.size()){
					int m = c + r[k];
					c = m/10;
					r[k++] =m%10;							
				}
				if (c) r.push_back(c);
			}
		}
	}
	return r;
}
vector<int> getNum(int e){
	if (e <= 2){
		vector<int> r;
		uint64_t n = 1UL<<e;

		while (n>0){
			int d = (n%10);
			r.push_back(d);
			n=n / 10;
		}
		
		return r;
	}
	vector<int> m = getNum(e/2);

	vector<int> r = mulvec(m,m);

	if (e%2) {
		vector<int> t={2};
		r =  mulvec(r,t);
	}
	return r;
}
int Powerdigitsum(int e){
	uint64_t s=0;

	for (auto i : getNum(e)){
		s+=i;
	}
	return s;
}
int main()
{
	int e=1000;
	//Powerdigitsum(d);
	cout << "Power digit sum " << " : " << Powerdigitsum(e) << endl;
	//Power digit sum  : 1366
	return 0;
}




