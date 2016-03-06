// trying to create runga-kuta method

// header files
#include <iostream>
#include <stdlib.h>

// global declerations
typedef double Real;

// defining namespace
using namespace std;

// creating the function

// k1=y0+h(x0+y0)
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
