#include<iostream>
using namespace std;
int main(){
int a;
cout<<"enter no.";
cin>>a;
if((0<=a)&&(a<10)||(a<0)&&(a>-10))
cout<<"single digit";
else if((10<=a)&&(a<100)||(a<=-10)&&(a>-100))
cout<<"double digit";
else if(a>=100||(a<=-100))
cout<<"otherwise three or more digit";
return 0;}
