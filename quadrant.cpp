#include<iostream>
using namespace std;
int main()
{
	int x,y;
cout<<"enter the value of x coordinate";
cin>>x;
cout<<"enter the value of y coordinate";
cin>>y;
if((x>0)&&(y>0))
cout<<"first quadrant";
else if ((x>0)&&(y<0))
cout<<"fourth quadrant";
else if ((x<0)&&(y<0))
cout<<"third quadrant";
else if((x<0)&&(y>0))
cout<<"second quadrant";
else if((x==0)&&(y>0))
cout<<"y is lying blw 1st and 2nd ";
else if ((x==0)&&(y<0))
cout<<"y is lying blw 3rd and 4th";
else if ((y==0)&&(x>0))
cout<<"x is lying blw 1st and 4th";
else if ((y==0)&&(x<0))
cout<<"x is lyinh blw 2nd and 3rd ";
else
cout<<"origin";
return 0;}
