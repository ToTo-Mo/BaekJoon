#include <iostream>
#include <math.h>
using namespace std;

int q16283()
{
    int l, g;
    int a, b;
    int n,w;
    bool canSolve = false;

    cin>>a>>b>>n>>w;

    if(b != a)
    {
        g = (w - n*a)/(b-a); 
        l = n-g;

        if(1<=l && 1<= g)
            canSolve = true;
    }
    else
    {
        if(n%2 == 0)
        {
            l = n/2;
            g = l;
            canSolve = true;
        }
    }

    if(canSolve == true)
        cout<<l<<" "<<g<<endl;
    else   
        cout<<-1<<endl;

    return 0;
}