#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter the value of a = ";
cin>>a;
cout<<"enter the value of b = ";
cin>>b;
cout<<"enter the value of c = ";
cin>>c;
if((a>b)&&(a>c))
cout<<"a is greater than both b and c";
if((b>a)&&(b>c))
cout<<"b is greater than both a and c";
else 
cout<<" c is greater than both b and a";
return 0;}
