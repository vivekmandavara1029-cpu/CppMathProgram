#include<iostream>
#include<cmath>
using namespace std;
int main (){
	
	int n,c,d,copy,l;
	cout<<"enter no";
	cin>>n;
	copy=n;
	n=n/10;
	l=1;
	while(n>0){
	l=l*10;
	n=n/10;}
	
while(copy>0){
c=copy%10;
d=copy/l;
copy=copy%l;
copy=copy/10;
c=c*l+copy*10+d;
cout<<c;
copy=0;}

return 0;}

