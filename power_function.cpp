#include<iostream>
using namespace std;
int power(int,int);
int power(int x,int y){
	int result=1,i;
for(i=1;i<=y;i++){
result=x*result;}
return (result);}
int main (){
int x,y ;
cout<<"enter the value of x = ";
cin>>x;
cout<<"enter the value of y = ";
cin>>y;
cout<<power(x,y);
return 0;}
