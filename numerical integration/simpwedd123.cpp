#include<iostream>
using namespace std;
num_integration()
{
	float a[20],y[20],upl,lol,h,y0,ya=0,yb=0,yc=0,yd=0,ye=0,yf=0,res;
	int j,n,i,ch;
	cout<<"enter the number of x values\n ";
	cin>>n;
	if(n%2==0 && n%3==0 && n%6==0)
		cout<<"solvable by simpson's 1 by 3 and 3 by 8 rule and weddle's rule"<< endl;
	else if(n%2==0 && n%3==0)
		cout<<"solvable by simpson's 1 by 3 and 3 by 8 rule"<< endl;
	else if(n%2==0)
		cout<<"solvable by simpson's 1 by 3 rule"<< endl;
	else if(n%3==0)
		cout<<"solvable by simpson's 3 by 8 rule"<< endl;
	start :
	cout<<"enter choice\n";
	cout<<"solve by \n 1.simpson's 1 by 3 rule  \n 2.simpson's 3 by 8 rule and \n 3.weddle's rule"<< endl;
	cin>>ch;
	switch(ch)
	{
		case 1:if(n%2==0)
			   {
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
				}
				else
					cout<<"not possible\n";
				break;
		case 2:if(n%3==0)
				{
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
						if(i%3==0)
						{
							yb= yb + y[i];
						}
						else
						{
							yc= yc + y[i];
						}

					}

					res = ((3*h)/8)*(ya + 2*yb + 3*yc);
					cout<<"the result of given integral is found be: "<<res;
				}
				else
					cout<<"not possible\n";
				break;
		case 3:if(n%6==0)
				{
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
					cout<<"h = "<<h << endl;
					y0=y[0]+y[n];
					cout<<"y0 + yn ="<<y0 << endl;
					for(i=1;i<n;i++)
					{
						if((float)(i/1)==1 && (i%1)==0)

						{
							ya = ya + y[i];
							for(j=1;(j*6 + i)<n;j++)
								ya = ya + y[i + (j*6)];
							cout<<"y1 + y7 + ....... = "<<ya << endl;
						}
						else if((float)(i/2)==1 && (i%2)==0)
						{
							yb = yb + y[i];
							for(j=1;(j*6 + i)<n;j++)
								yb = yb + y[i + (j*6)];
							cout<<"y2 + y8 + ........ = "<<yb << endl;
						}
						else if((float)(i/3)==1 && (i%3)==0)
						{
							yc = yc + y[i];
							for(j=1;(j*6 + i)<n;j++)
								yc = yc + y[i + (j*6)];
							cout<<"y3 + y4 +.......... = "<<yc << endl;

						}
						else if((float)(i/4)==1 && (i%4)==0)
						{
							yd = yd + y[i];
							for(j=1;(j*6 + i)<n;j++)
								yd = yd + y[i + (j*6)];
							cout<<"y4 + y10 +.........= "<<yd << endl;

						}
						else if((float)(i/5)==1 && (i%5)==0)
						{
							ye = ye + y[i];
							for(j=1;(j*6 + i)<n;j++)
								ye = ye + y[i + (j*6)];
							cout<<"y5 + y11 + ........= "<<ye << endl;


						}
						else if((float)(i/6)==1  && (i%6)==0)
						{
							yf = yf + y[i];
							for(j=1;(j*6 + i)<n;j++)
								yf = yf + y[i + (j*6)];
							cout<<"y6 + y12 +.........= "<<yf  << endl;
						}

					}

					res = ((3*h)/10)*(y0 + (5*ya) + yb + (6*yc) + yd + (5*ye) + (2*yf));
					cout<<"the result of given integral is found be: "<< res << endl;
				}
                else
                	cout<<"not possible \n";
                break;
                default :cout<<"not valid choice\n";
                goto start;
    }
    return 0;
    }
