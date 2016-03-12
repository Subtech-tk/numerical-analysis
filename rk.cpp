// trying to create runga-kuta method
// Runga_kutta method for 1st order ODE
// header files
#include <iostream>
#include <stdlib.h>

// global declerations
typedef double Real;

// defining namespace
using namespace std;

/*
ALGORITHM RUNGE–KUTTA (ƒ, x 0 , y 0 , h, N).
This algorithm computes the solution of the initial value problem y = ƒ(x, y), y(x 0 ) = y 0
at equidistant points
x 1 ϭ x 0 ϩ h, x 2 ϭ x 0 ϩ 2h, Á , x N ϭ x 0 ϩ Nh;
(9)
here ƒ is such that this problem has a unique solution on the interval [ x 0 , x N ] (see Sec. 1.7).
INPUT:
Function ƒ, initial values x 0 , y 0 , step size h, number of steps N
OUTPUT: Approximation y nϩ1 to the solution y(x nϩ1 ) at x nϩ1 ϭ x 0 ϩ (n ϩ 1) h,
where n ϭ 0, 1, Á , N Ϫ 1
For n = 0, 1, Á , N Ϫ 1 do:
j k 1 = hf (x n , y n )
j k 2 = hf (x n ϩ 12 h, y n ϩ 12 k 1 )
j k 3 = hf (x n ϩ 12 h, y n ϩ 12 k 2 )
j k 4 = hf (x n ϩ h, y n ϩ k 3 )
j x nϩ1 = x n ϩ h
j y nϩ1 = y n ϩ 16 (k 1 ϩ 2k 2 ϩ 2k 3 ϩ k 4 )
j OUTPUT x nϩ1 , y nϩ1
End
Stop
End RUNGE–KUTTA
*/

// global variables
	Real x0,y0,xn,h;


Real fun(Real x,Real y)
{
    return 1/(x+y);    //function defination
}

void input()
{
    //read x[0],y[0],x,h from the user
    cout<<"x0=";
    cin>>x0;  // x[0] initial value
    	cout<<"y0=";
	cin>>y0;  // y[0] initial value
    cout<<"xn";
	cin>>xn;    // xn last value of x title which calculation has to be done
    cout<<"h";
	cin>>h;     // step lenth
}

Real rk4 (Real x, Real y)
{
    Real k1=h*fun(x,y);
    Real k2=h*fun(x+h/2,y+k1/2);
    Real k3=h*fun(x+h/2,y+k2/2);
    Real k4=h*fun(x+h,y+k3);
    Real yy=y+(h/6)*(k1+2*k2+2*k3+k4);
	return yy;
}

int main()
{
	input();
	int n=(xn-x0)/h;
	Real y[n],x[n];
	x[0]=x0;
	y[0]=y0;

	for (int i=1;i<=n;++i)
	{
		x[i]=x[i-1]+n;
		y[i]=rk4(x[i-1],y[i-1]);
		cout<<x[i]<<" & "<<y[i]<<"\n";
	}
	return 0;
}
