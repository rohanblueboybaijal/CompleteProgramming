#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int freq(int a[], int n)
{
   sort(a,a+n);

   if(n==1)
   {
       return 1;
   }
   else if(n==2)
   {
       if(a[1]-a[0]<=1)
       {
           return 1;
       }
       else
       {
           return 0;
       }  
   }
   else if(a[0]==a[n-1])
   {
       return 1;
   }
   else if((a[1]==a[n-1])&& a[1]-a[0]==1)
   {
       return 1;
   }
   else if((a[0]==a[n-2])&&a[n-1]-a[n-2]==1)
   {
       return 1;
   }
   return 0;
}

int main()
{
    string str;
    getline(cin,str);
    int a[26];
    int i,n;

    for(i=0;i<26;i++)
        a[i]=0;

    n=str.length();

    for(i=0;i<n;i++)
        a[(str[i]-'a')]++;

    int final[26],k=0;

    for(i=0;i<26;i++)
        final[i]=0;
    
    for(i=0;i<26;i++)
        if(a[i])
            final[k++] = a[i];
    
    int flag = freq(final, k);
    if(flag)
        cout<<"YES";
    else 
        cout<<"NO";
    return 0;
}