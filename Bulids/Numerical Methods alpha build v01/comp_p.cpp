#include <iostream>
typedef double Real;
using namespace std;
// function to calculate the NGFI & NGBI series
int fact(int x)
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

Real comp_p(Real p,int n)
{
    if(n==0)
    {
        return p;
    }
    else
    {
        return ((p-n)*(comp_p(p,n-1)));
    }
}

