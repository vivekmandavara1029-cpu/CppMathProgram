#include<iostream>
using namespace std; 
int main(){
	int i,c,n;
	cout<<"enter no.";
	cin>>n;
	i=0;
	while(n>0){
	c=n%10;
	n=n/10;
	i=c;
	cout<<c;}
	return 0;}
