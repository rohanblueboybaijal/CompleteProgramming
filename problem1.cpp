#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

void caeser (string *s, int n, int k)
{
    int i;
    for(i=0;i<n;i++)
    {
        if((*s)[i]>= 'A' && (*s)[i]<= 'Z')
        {
            (*s)[i] = ((*s)[i] + k - 'A')%26 + 'A';
        }
        else if((*s)[i]>='a' && (*s)[i]<= 'z')
        {
            (*s)[i] = ((*s)[i] + k -'a')%26 + 'a';
        }
    }
}

int main()
{
    string str;
    int n,k;
    cin>>n;
    cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
    getline(cin,str);
    n=str.length();
    cin>>k;
    caeser(&str,n,k);
    cout<<str<<endl;
    return 0;
}