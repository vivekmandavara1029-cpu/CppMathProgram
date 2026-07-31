#include<iostream>
using namespace std;
int main(){
int x,y,z;
cout<<"enter no";
cin>>y>>x>>z;
if ((x+y>z)&&(y+z>x)&&(z+x>y))
{
	if((x==y)&&(y==z))
cout<<"equvilateral";
else if((x==y)||(y==z)||(z==x))
cout <<"isoceles";
else
cout<<"scalane"; }
else
cout<<"not vailid";
return 0;}
