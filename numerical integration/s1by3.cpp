#include<iostream>
using namespace std;

int main()
{
	float a[20],y[20],upl,lol,h,ya=0,yb=0,yc=0,res;
	int i,n;
	cout<<"enter no. of x values \n";
	cin>>n;
	cout<<"enter the x values \n";
	for(i=0;i<=n;i++)
		cin>>a[i];
	cout<<"enter corresponding y values\n";
	for(i=0;i<=n;i++)
		cin>>y[i];
	cout<<"enter the upper limit of integration\n";
	cin>>upl;
	cout<<"enter the lower limit of the integral\n";
	cin>>lol;
	h=(upl - lol)/n;
	ya=y[0]+y[n];
	for(i=1;i<n;i++)
	{
		if(i%2==0)
		{
			yb= yb + y[i];
		}
		else
		{
			yc= yc + y[i];
		}

	}

	res = (h/3)*(ya + 2*yb + 4*yc);
	cout<<"the result of given integral is found be: "<<res;
	return  0;
}

