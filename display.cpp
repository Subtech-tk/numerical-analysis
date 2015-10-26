#include<iostream>
typedef double Real;
using namespace std;

void transpose(Real *mat1, Real *mat2, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            mat2[j][i]=mat1[i][j];
        }
    }
}

void display(Real *Disp, Real *x, int n)
{
    Real di[n][n];
    transpose(Disp,di,n);
    cout<<"# X:\t# Y:\t#";
    for(int i=1;i<n;i++)
    {
        cout<<"D^"<<i<<"\t#";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {   //to print rows
        cout<<"#"<<x[i]<<"\t#";
        for(int j=0;j<n;j++)
        {   //to print coloumns
            cout<<di[i][j]<<"\t#";
        }
        cout<<endl;
    }
}
