#include<iostream>
using namespace std;
int main(){
int a;
cout<<"enter the value of a = ";
cin>>a;
if((a%2==0)&&(a>0))
cout<<"it is a positive and an even number";
else if ((a%2==0)&&(a<0))
cout<<"it is a negative and an even number";
else if ((a%2!=0)&&(a>0))
cout<<"it is a odd and a positive number";
else if(a==0)
cout<<"it is an even number ";
else
cout<<"it is a odd and a negative number";
return 0;}
