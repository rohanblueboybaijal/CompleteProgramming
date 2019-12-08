#include <iostream>
#include <string>
#include <stack>

using namespace std;

void showstack (stack<char> s)
{
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
}

int main()
{
    string str;
    stack<char> s;
    int l,r;
    l=r=0;
    getline(cin,str);

    if(str.length()%2)
        cout<<"-1";
    else 
    {
        for(int i=0;i<str.length(); i++)
        {
            if(!s.empty())
            {
                if(str[i]==')' && s.top()=='(')
                {
                    s.pop();
                }
                else
                {
                    s.push(str[i]);
                } 
            }
            else
            {
                s.push(str[i]);
            }
            
        }
    }

    //showstack(s);
    //cout<<s.size()<<" ";

    while(!s.empty())
    {
        if(s.top()=='(')
            l+=1;
        else
            r+=1;
        s.pop();
    }
    cout<<(l+1)/2 + (r+1)/2;

    return 0;

}