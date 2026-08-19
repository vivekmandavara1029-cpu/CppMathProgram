#include<iostream>
using namespace std; 
int main(){
	int p,a,b,max,min;
	cout<<"enter the value of a =  ";
	cin>>a;
	cout<<"enter the value of b = ";
	cin>>b;
	if(a>b){
	max=a;
	min=b;}
	else {
	max=b;
	min=a;}
	p=1;
	while((max>0)&&(min>=p)){
	cout<<max<<endl<<p<<endl;
	max--;
	p++;}
	while((max>0)&&(p>min)){
	cout<<max<<endl;
	max--;}
	return 0;}
