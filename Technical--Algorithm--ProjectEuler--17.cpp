#### 17

#include <bits/stdc++.h>
using namespace std;

string Numberlettercounts(int n){
	unordered_map<int,string> m;
	m[1]="one"; 
	m[2]="two"; 
	m[3]="three";
	m[4]="four";
	m[5]="five"; 
	m[6]="six";
	m[7]="seven"; 
	m[8]="eight"; 
	m[9]="nine";
   m[10]="ten";
   m[11]="eleven";
   m[12]="twe
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
lve";
   m[13]="thirteen";
   m[14]="fourteen";
   m[15]="fifteen";
   m[16]="sixteen";
   m[17]="seventeen";;
   m[18]="eighteen";
   m[19]="nineteen";
	m[20]="twenty";
	m[30]="thirty";
	m[40]="forty";
	m[50]="fifty";
	m[60]="sixty";
	m[70]="seventy";
	m[80]="eighty";
	m[90]="ninety";
	m[100]="hundred";
	m[1000]="onethousand";
	string s;
	if (n==1000) return m[n];

	if (n>=100){
		 s += m[n/100];
		 s += m[100];

		 if (n%100){
		 	s +="and";
		 }
	}
	if (n%100){
		int t = n%100;
		if (t<20) s+=m[n%20];	
		else if (t%10)
		{
				s +=m[t-t%10];
				s +=m[t%10];
		}
		else{
			s += m[t];
		}
	}
	
	return s;
}
int main()
{
	uint64_t n=1000,s=0;
	for (int i=1; i<=n; i++){
		string k=Numberlettercounts(i);
		s+=k.length();
	}
	cout << "Number letter counts " << " : " << s << endl;
	//Number letter counts  : 21124

	return 0;
}




