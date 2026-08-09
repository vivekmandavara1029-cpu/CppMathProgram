#include<iostream>
using namespace std; 
int main(){
	float copy, x,p, n;
	cout<<"enter no";
	cin>>n;
	copy=n;
	p=0;
	while(n!=0){
	cout<<"enter no. = ";
	cin>>x;
	p=p+x;
	n--;}
	p=p/copy;
	cout<<"the average is = "<<p;
	return 0;}
	
