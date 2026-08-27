#include<iostream>
using namespace std;
int main(){
int x,y,quotient,remainder;
cout<<"enter the value of x = ";
cin>>x;
cout<<"enter the value of y = ";
cin>>y;
if(x%y==0){
cout<<" x is divisible by y"<<endl;
quotient=x/y;
if(quotient%2==0)
cout<<"the Quotient is even"<<endl;
else
cout<<"the Quotient is odd"<<endl;}
else{
cout<<"x is not divisible by y"<<endl;
remainder=x%y;
if(remainder%2==0)
cout<<"the Remainder is even"<<endl;
else
cout<<"the Remainder is odd"<<endl;
}
if(y%x==0){
cout<<"y is divisible by x"<<endl;
quotient=y/x;
if(quotient%2==0)
cout<<" the Quotient is even"<<endl;
else
cout<<" the Quotient is odd"<< endl;}
else{
cout<<"y is not divisible by x"<<endl;
remainder=y%x;
if(remainder%2==0)
cout<<"the Remainder is even"<<endl;
else
cout<<"the Remainder is odd"<<endl;
}
return 0;}

