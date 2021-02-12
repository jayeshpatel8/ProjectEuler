#### 22
#include <bits/stdc++.h>
using namespace std;


int main()
{
	set<string> st;
	
		string a;
		cin >> a;
		int s=1;
		for (int i=1; i<a.size(); i++){
			if (a[i]!='"') continue;
			st.insert(a.substr(s,i-s));
			s=i+3;
			i+=2;
		}
		uint64_t r=0,i=1;
		for ( auto it=st.begin(); it != st.end
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
(); it++){
			uint64_t sum = 0;
			for (auto c : *it) sum +=c -'A'+1;
			r += sum * (i++);
		} 
	cout << "Names scores " << " : " << r << endl;
	//Names scores  : 871198282

	return 0;
}



