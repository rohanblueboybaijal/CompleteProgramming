#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>

using namespace std;

int check (string *p, string *v, int plen, int vlen, int index)
{
    int i;
    int lost=0;
    for(i=0 ;i< vlen ; i++)
    {
        if((*p)[i+index]!=(*v)[i])
            lost++;
    }
    
    if(lost >1)
        return 0;
    return 1;
}

int main()
{
    string p,v;
    getline(cin,p);
    getline(cin,v);

    int plen, vlen;
    plen = p.length();
    vlen = v.length();

    int i,flag=1;

    if(vlen>plen)
        cout<<"No Match";
    
    else 
    {
        for(i=0;i<=plen-vlen;i++)
        {
            if(check(&p, &v, plen, vlen, i))
            {
                flag =0;
                cout<<i<<" ";
            }
        }
    }

    if(flag)
        cout<<"No Match";

    return 0;
    
}