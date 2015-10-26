#include <iostream>
#include <stdlib.h>
#include "comp_x.cpp"
typedef double Real;
using namespace std;

// Lagrauge's Interpolation Formula

/**here x points towards x array, y points towards y array and n is their size**/
void LGIF(Real *x, Real *y, int n, Real xv)
{
    cout<<"   x  :";
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<"\t";
    }
    cout<<"\n";
    cout<<"   y  :";
    for(int i=0;i<n;i++)
    {
        cout<<y[i]<<"\t";
    }
    cout<<"\n\n\n";     //some line breakes for good output

    // formula to calculate the y(x)
    Real yv=0,ya=0,yb=0;
    cout<<"BY LGFI \n y|(x="<<xv<<") = ";
    for(int i=0;i<n;i++)
    {   ya=comp_x_a(x,xv,n,i);
        yb=comp_x_b(x,x[i],n);
        yv=yv+((ya*y[i])/yb);
        cout<<ya<<"*"<<y[i]<<"/"<<yb;
        //cout<<yv;
        if(i!=(n-1))
        cout<<" + ";
    }
    cout<<"\nTherefore \n y|(x="<<xv<<") = "<<yv<<"  ans"<<endl;
}

int LGIF_main()
{
    //system("clscr");
    int n=0;
    Real xv=0;
    cout <<" Lagrauge's Interpolation Formula \nEnter the Number of elements : ";
    cin>>n;
    Real x[n],y[n];
    cout<<"\nEnter the values of x \n:";
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    cout<<"\nEnter the values of y \n:";
    for(int i=0;i<n;i++)
    {
        cin>>y[i];
    }
    cout<<"\nEnter the value of x to be found : ";
    cin>>xv;
    LGIF(x,y,n,xv);
    return 0;
}

