#include<iostream>
#include<cmath>
using namespace std;
int main (){
 long long  int flag, n,i;
	cout<<"enter no.= ";
	cin>>n;
	flag=1;
	for(i=2;(i<sqrt(n)&&(flag!=0));i++){
	if(n%i==0)
	flag=0;}
	if(flag==1)
	cout<<"it is  a prime no.";
	else
	cout<<"it is  not a prime no.";
	return 0;}
