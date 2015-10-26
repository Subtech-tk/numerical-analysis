// start of the project
#include <iostream>
#include <stdlib.h>
#include "NDDF.cpp"
//#include "compute.cpp"
#include "NGFI.cpp"
//#include "comp_p.cpp"
#include "LGIF.cpp"
//#include "comp_x.cpp"
#include "LGII.cpp"
typedef double Real;
using namespace std;

// functions in the program
// for NDDF
Real comp(Real*,int,Real);
// for NGFI & NGBI (NGBI not maid yet)
int fact(int x);
Real comp_p(Real,int);
// for LGFI & LGII
Real comp_x_a(Real*,Real,int,int);
Real comp_x_b(Real*,Real,int);
int main()
{
    int ch;
    cout<<"Select a method to Use :\n"
        <<"1. Newton Divided difference method\n"
        <<"2. NGFI\n"
        <<"3. LGFI\n"
        <<"3. LGII\n";
    cin>>ch;
    switch(ch)
    {
        case 1:NDDF_main();break;
        case 2:NGFI_main();break;
        case 3:LGIF_main();break;
        case 4:LGII_main();break;
        default:;
    }
    return 0;
}
