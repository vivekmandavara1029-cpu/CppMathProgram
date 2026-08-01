#include<iostream>
using namespace std;
int main (){
int n1,n2,i,max,lcm;
cout<<"enter no.";
cin>>n1>>n2;
if(n1>n2)
max=n1;
else
max=n2;
i=(max-1);
while((i%n1!=0)||(i%n2!=0)){
	i++;}
cout<<"the lcm is "<<i;
return 0;}
