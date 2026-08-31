#include<iostream>
#include<cmath>
using namespace std;
int prime(int);
int prime(int x){
	int result,i,flag;
	flag=1;
for(i=2;i<((x)&&(flag==1));i++){
if((x%i)==0)
flag=0;}
return(flag);}
int main(){
int n;
cout<<"enter the value of n = ";
cin>>n;
cout<<prime(n);
return 0;}
