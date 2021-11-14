#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
struct point 
{
	int x;
	int y;
	int z;
}; 
int main()
{
	int x,y,z,xx,yy,zz;
	double r,s;
	while(cin>>x>>y>>z>>xx>>yy>>zz)
	{	
		point p;
		p.x=x;
		p.y=y;
		p.z=z;
		point c;
		c.x=xx;
		c.y=yy;
		c.z=zz;
		r=sqrt((c.x-p.x)*(c.x-p.x)+(c.y-p.y)*(c.y-p.y)+(c.z-p.z)*(c.z-p.z));
		s=4*r*r*r*acos(-1)/3;
		printf("%.3f %.3f\n",r,s);
	}
}
