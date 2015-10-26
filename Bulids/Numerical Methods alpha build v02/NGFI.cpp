#include <iostream>
#include <stdlib.h>
#include "comp_p.cpp"
typedef double Real;
using namespace std;

// newtons geogery forward interpolation method

/**here x points towards x array, y points towards y array and n is their size**/
void NGFI(Real *x, Real *y, int n, Real xv)
{
    Real DD[n][n];       // DD is the divded difference which we consider in making the table

    cout<<"   x  :";
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<"\t";
    }
    cout<<"\n";
    cout<<"   y  :";
    for(int i=0;i<n;i++)
    {
        DD[0][i]=y[i];      //taking zeroth column of DD as y itself
        cout<<DD[0][i]<<"\t";
    }
    cout<<"\n";
    for(int i=1;i<n;i++)
    {
        cout<<"D^"<<i<<" y :";
        for(int j=0;j<n-i;j++)
        {
            DD[i][j]=((DD[i-1][j+1]-DD[i-1][j]));
            cout<<DD[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\n\n\n";     //some line breakes for good output

    // formula to calculate the y(x)
    Real yv,yvv,p,ytemp;
    p=(xv-x[0])/(x[1]-x[0]);
    yvv=0;
    cout<<"BY NDDF \n y|(x="<<xv<<") = "<<y[0];
    for(int i=1;i<n;i++)
    {   ytemp=comp_p(p,i-1);
        yvv=yvv+((ytemp)*(DD[i][0])/fact(i));
        cout<<" + "<<ytemp<<"*"<<DD[i][0];         //for displaying the result only
    }
    yv=y[0]+yvv;
    cout<<"\nTherefore \n y|(x="<<xv<<") = "<<yv<<"  ans"<<endl;
}

int NGFI_main()
{
    system("cls");
    int n=0;
    Real xv=0;
    cout << "Newtons Gregory Forward Interpolation Method \nEnter the Number of elements : ";
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
    NGFI(x,y,n,xv);
    return 0;
}

