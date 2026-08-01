#include<iostream>
using namespace std;
int main (){
 int n,d,fac;
 cout<<"enter no.";
 cin>>n;
 fac=1;
  while(n>1){
  	fac=fac*n;
  	n--;
	  }
 cout<<"the factorial is "<<fac;
 return 0;}
 
