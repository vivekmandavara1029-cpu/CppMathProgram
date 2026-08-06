#include<iostream>
using namespace std; 
int main(){
	int a,c,copy,k, l,n;
	cout<<"enter no";
	cin>>n;
	k=n;
	
	copy=n;
	n=n/10;
	l=1;
	while(n!=0)
	{l=l*10;
	n=n/10;}
	a=0;
	while(copy>0){
	c=copy%10;
	c=c*l;
	a=a+c;
	copy=copy/10;
	l=l/10;}
	if(a==k){
	cout<<"it is a palindrome no.";}
	else {
	cout<<"it is not a palindrome no.";}

	return 0;}
