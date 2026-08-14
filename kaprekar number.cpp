#include<iostream>
using namespace std;
int main (){
 long long int n,count=0,squ,l=1,sum,copy;
cout<<"enter the value of n = ";
cin>>n;
copy=n*n;
squ=n*n;
while(squ>0){
count=count+1;
squ=squ/10;}
count=count/2;
while(count>0){
l=l*10;
count=count-1;}
sum=copy%l+copy/l;
if(sum==n)
cout<<"it is a kapretar number";
else
cout<<"it is not a kapretar number";
return 0;}
