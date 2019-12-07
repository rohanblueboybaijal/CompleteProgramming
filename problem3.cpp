#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int check(int i, int j, int a[][26])
{
    int index=0;
    int flag=1;
    for(index=0;index<26;index++)
    {
        if(a[i][index]^a[j][index])
        {
            flag=0;
            break;
        }
    }
    return flag;
}

int main()
{
    string str;
    getline(cin,str);
    int n = str.length();
    int i,j,k;
    int ss = (n*(n+1))/2;
    int anagram[ss][26];

    for(i=0;i<ss;i++)
        for(j=0;j<26;j++)
            anagram[i][j]=0;
    
    int index =0;

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=i;k<=j;k++)
            {
                anagram[index][str[k]-'a']++;
            }
            index++;
        }
    }

    int match =0;
    for(i=0;i<ss-1;i++)
    {
        for(j=i+1;j<ss;j++)
        {
            match = match + check(i,j, anagram);
        }
    }

    cout<<match;
    return 0;

}