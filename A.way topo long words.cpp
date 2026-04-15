#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s[101];
        cin>>s;
        int length=strlen(s);
        if(length<=10)
        {
            cout<<s<<endl;
        }
        else if(length >10)
        {
            cout<<s[0]<<length-2<<s[length-1]<<endl;
        }
    }
}
