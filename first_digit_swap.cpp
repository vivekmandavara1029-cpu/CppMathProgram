#include<iostream>
#include<cmath>
using namespace std;
int main (){
int n1,n2,l1=1,l2=1,copy1,copy2,x=0,y=0;
	cout<<"enter the value of n1 = ";
	cin>>n1;
	cout<<"enter the value of n2 = ";
	cin>>n2;
	copy1=n1;
	copy2=n2;
	n1=n1/10;
	n2=n2/10;
	while(n1>0){
	l1=l1*10;
	n1=n1/10;}
     while(n2>0){
     l2=l2*10;
n2=n2/10;}
while(copy1!=copy2){
	x=copy1/l1;
x=x*l2;
x=copy2%l2+x;
	y=copy2/l2;
    y=y*l1;
  y=copy1%l1+y;
cout<<"the value of n1 after changed is "<<y<<endl;
cout<<"the value of n2 after changed is "<<x<<endl;
copy1=copy2;}
return 0;}


	

