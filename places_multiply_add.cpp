#include<iostream>
using namespace std; 
int main(){
	int  copy,a,b,d,c,n;
	cout<<"enter no";
	cin>>n;
	copy=n;
	n=n/10;
	a=1;
	while(copy!=0){
	c=copy%10;
	a=a*c;
	copy=copy/100;}
	cout<<"the multiply of odd places is "<<a<<endl;
	b=0;
	while(n!=0){
	d=n%10;
	b=b+d;
	n=n/100;}
	cout<<"the addition of even places is "<<b<<endl;
	return 0;}
