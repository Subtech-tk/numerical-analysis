#include <iostream>
typedef double Real;
using namespace std;
// function to calculate the NDDF series

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

