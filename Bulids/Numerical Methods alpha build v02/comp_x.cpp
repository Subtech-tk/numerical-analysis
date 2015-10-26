#include <iostream>
typedef double Real;
using namespace std;

// function to compute (xa-x1)(xa-x2)......(xa-xn) where 'a' can be 1,2,3....n
// To calculate the upper series
Real comp_x_a(Real *a, Real b, int n, int r) // a is holding the array and b is holding the x value n is the size of array
{                                            // r is holding the xr value which not to br include.
    Real temp=1;
    for(int i=0;i<n;i++)
    {
        if(i!=r)
            temp=temp*(b-a[i]);
    }
    return temp;
}

// To calculate the lower series
Real comp_x_b(Real *a, Real b, int n) //same as above and r is holding the xr value which not to be included
{
    Real temp=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b)
            temp=temp*(b-a[i]);
    }
    return temp;
}
