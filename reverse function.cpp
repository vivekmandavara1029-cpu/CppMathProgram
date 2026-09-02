#include<iostream>
using namespace std;
int reverse(int);
int reverse(int x){
	int l=1,copy,ld,sum;
	copy=x;
	copy=copy/10;
	while(copy>0){
		l=l*10;
		copy=copy/10;}
		while(x>0){
			ld=x%10;
			sum=ld*l+sum;
			x=x/10;
			l=l/10;}
			return (sum);}
			int main(){
		int n;
		cout<<"enter the value of n = ";
		cin>>n;
		cout<<"the reverse of given value is = "<<reverse(n);
		return 0;}
		
