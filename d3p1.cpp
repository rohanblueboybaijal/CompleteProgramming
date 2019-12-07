#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <limits.h>
#include <string>
#include <iterator>


using namespace std;



class Student
{
    private:
        int age;
        string first_name;
        string last_name;
        int std;
    public:
        void get_age();
        void set_age(int n);
        void get_first_name();
        void set_first_name(string s);
        void get_last_name();
        void set_last_name(string s);
        void get_standard();
        void set_standard(int n);
        void to_string();
};

void Student :: get_age()
{
    int n;
    cin>>n;
    set_age(n);
}

void Student :: set_age(int n)
{
    age = n;
}

void Student :: get_first_name()
{
    string s;
    getline(cin,s);
    set_first_name(s);
}

void Student :: set_first_name(string s)
{
    first_name =s;
}

void Student :: get_last_name()
{
    string s;
    getline(cin,s);
    set_last_name(s);
}

void Student :: set_last_name(string s)
{
    last_name =s;
}

void Student :: get_standard()
{
    int n;
    cin>>n;
    set_standard(n);
}

void Student :: set_standard(int n)
{
    std = n;
}

void Student :: to_string()
{
    cout<<age<<","<<first_name<<","<<last_name<<","<<std<<endl;
}

int main()
{
    int n;
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++)
    {
        s[i].get_age(); 
        cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
        s[i].get_first_name();
        s[i].get_last_name();
        s[i].get_standard();
        s[i].to_string();
    }
    return 0;
}