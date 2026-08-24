#include<iostream>
using namespace std;
int main (){
int n,c,sum;
cout<<"enter the value of n = "  ;
cin>>n;
 while(n>9){
 sum=0;
 while(n>0){
 sum=sum+n%10;
 n=n/10;}
 n=sum;}
cout<<sum;
return 0;}



