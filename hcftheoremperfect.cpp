#include<iostream>
using namespace std;
int main (){
int n1,n2,x;
cout<<"enter no.";
cin>>n1>>n2;
while(n1!=n2){
	if(n1>n2)
n1=n1-n2;
else
n2=n2-n1;
}
cout<<n2;
return 0;}


