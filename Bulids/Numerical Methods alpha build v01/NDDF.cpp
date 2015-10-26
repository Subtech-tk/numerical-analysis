#include <iostream>
#include <stdlib.h>
//#include "compute.cpp"
typedef double Real;
using namespace std;
// newtons divided difference method


Real comp(Real *a,int n,Real xv)
{
    if(n==0)
    {
        return (xv-a[0]);
    }
    else
    {
        return ((xv-a[n])*comp(a,n-1,xv));
    }
}


/**here x points towards x array, y points towards y array and n is their size**/
void NDDF(Real *x, Real *y, int n, Real xv)
{
    Real DD[n][n];       // DD is the divded difference which we consider in making the table
    int shift;          // shift we use to choose the value of the x as DD increases
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
        shift=i;            // as ith DD increases the shift also increase
        cout<<i<<"th DD:";
        for(int j=0;j<n-i;j++)
        {
            DD[i][j]=((DD[i-1][j+1]-DD[i-1][j])/(x[j+shift]-x[j]));
            cout<<DD[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\n\n\n";     //some line breakes for good output
    // formula to calculate the y(x)
    Real yv,yvv;
    yvv=0;
    cout<<"BY NDDF \n y|(x="<<xv<<") = "<<y[0];
    for(int i=1;i<n;i++)
    {
        yvv=yvv+((comp(x,i-1,xv))*(DD[i][0]));
        cout<<" + "<<comp(x,i-1,xv)<<"*"<<DD[i][0];         //for displaying the result only
    }
    yv=y[0]+yvv;
    cout<<"\nTherefore \n y|(x="<<xv<<") = "<<yv<<"  ans"<<endl;
}

void NDDF_main()
{
    system("cls");
    int n=0;
    Real xv=0;
    cout << "Newtons divided difference method" << endl <<"Enter the Number of elements : ";
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
    NDDF(x,y,n,xv);
    return;
}
