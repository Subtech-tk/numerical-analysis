#include <iostream>
typedef double Real;
using namespace std;
// function to calculate the NGFI & NGBI series
int factb(int x)
{
    if(x==0)
    {
        return 1;
    }
    else
    {
        return (x*fact(x-1));
    }
}

Real comp_pb(Real p,int n)
{
    Real temp=1;
    for(int i=n;i>=0;i--)
        temp=temp*(p+i);
    return temp;
}


