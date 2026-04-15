#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int count=0;
    while(t--)
    {
        int tanay,petya,tonu;
        cin>>tanay>>petya>>tonu;
        if(tanay+petya+tonu>=2)
        {
            count++;
        }
    }

    cout<<count<<endl;
}
