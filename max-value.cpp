# include<iostream>
using namespace std;
int main()
{
int a,b,c,d,max;
cout<<" enter the value of a , b , c and d "<<endl;
cin>>a>>b>>c>>d;
if(a>b)
max=a;
else
max=b;
if(c>max)
max=c;
if(d>max)
max=d;
cout<<max<<" is a largest number in a given numbers";
return 0;}
