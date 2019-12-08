#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void addPseudoQueue(stack<int> *s, int n);
void showstack(stack<int>);

int main()
{
    stack<int> s;
    int n;
    cin>>n;
    while(n)
    {
        addPseudoQueue(&s,n);
        cin>>n;
    }

    showstack(s);
    s.pop();
    showstack(s);
}

void addPseudoQueue(stack<int> *s, int n)
{
    stack<int> t;
    int el;
    while(!(*s).empty())
    {
        el = (*s).top();
        (*s).pop();
        t.push(el);
    }
    (*s).push(n);
    while(!t.empty())
    {
        el=t.top();
        (*s).push(el);
        t.pop();
    }
}

void showstack(stack<int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}