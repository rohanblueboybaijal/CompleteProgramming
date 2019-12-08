#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void addPseudoStack(queue<int> *q, int n)
{
    queue<int> t;
    t.push(n);
    int el;
    while(!(*q).empty())
    {
            el = (*q).front();
            (*q).pop();
            t.push(el);
    }
    while(!t.empty())
    {
        el=t.front();
        (*q).push(el);
        t.pop();
    }
}

void showq(queue<int> q)
{
    while((!q.empty()))
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main()
{
    queue<int> q;
    int n;
    cin>>n;
    while(n)
    {
        addPseudoStack(&q,n);
        cin>>n;
    }

    showq(q);
    //Based on the model, when we pop an element from q, it is the same as popping it from stack

    return 0;
}