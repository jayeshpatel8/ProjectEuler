#### 19

#include <bits/stdc++.h>
using namespace std;

int main()
{
	 int months[] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	 int day=(365+1)%7; // 1900 Monday to 1st of 1901
	 int Sundays=0;
	 if (day == 0) Sundays++;
	 
	 for (int i=1901; i<=2000; i++){
	 	months[1] = 28 + (i%4 ==0 && 
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
(i%100!=0 || i%400==0));
	 	
	 	for (int month=0; month<12; month++){
	 		day =  (day + months[month]) % 7;
	 		if (day == 0){ 
	 			Sundays++;
	 		}
	 	}
	 }
	 
	cout << "Counting Sundays " << " : " << Sundays << endl;
	//Counting Sundays  : 171

	return 0;
}




