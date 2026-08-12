#include<iostream>
using namespace std;
int main(){
int y;
cout<<"enter year";
cin>>y;
if((y%400==0)||((y%4==0)&&(y%100!=0)))
cout<<"it is a leap year";
else
cout<<"it is not a leap year";
return 0;
}
