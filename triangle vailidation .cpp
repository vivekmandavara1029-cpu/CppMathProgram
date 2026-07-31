#include<iostream>
using namespace std;
int main(){
int x,y,z;
cout<<"enter no";
cin>>x>>y>>z;
if((x+y>z)&&(y+z>x)&&(z+x>y))
cout<<"triangle is vailid";
else
cout<<"triangle is not vailid";
return 0;}
