#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

//Similar to coin change problem

int fermat (long int x, long int a, long int upper, long int n)
{
    if(x==0)
        return 1;
    else if(x<0)
        return 0;
    else if (a>upper)
        return 0;
    
    long int val = (long int)pow(a,n);
    return fermat(x,a+1,upper,n) + fermat(x-val,a+1,upper,n);
    
}

int main()
{
    long int x,n;
    cin>>x>>n;
    long int upper = (long int)pow(10,log10(x)/n) +1;
    int count = fermat(x,1,upper,n);
    cout<<count;
    return 0;
}