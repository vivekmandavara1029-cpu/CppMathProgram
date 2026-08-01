#include<iostream>
using namespace std;
int main (){
int n1,n2,min,hcf,i;
cout<<"enter no.";
cin>>n1>>n2;
if(n1>n2)
min=n2;
else
min=n1;
for(i=1;i<=min;i++){
if((n1%i==0)&&(n2%i==0))
hcf=i;}
cout<<"the hcf is "<<hcf;
return 0;}

