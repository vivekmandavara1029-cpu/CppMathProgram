#include<iostream>
using namespace std;
int main (){
int n1,n2,copy1,copy2,lcm,hcf;
cout<<"enter no.";
cin>>n1>>n2;
copy1=n1;
copy2=n2;
while(n1!=n2){
	if(n1>n2)
n1=n1-n2;
else
n2=n2-n1;
}
hcf=n1;
cout<<"the hcf is "<<hcf<<endl;
lcm=(copy1*copy2)/hcf;
cout<<"the lcm is "<<lcm;
return 0;}


