#include<iostream>
using namespace std;
int main()
{
    int w;
    cin>>w;
    bool found=false;
    if(w%2==0)
    {
        for(int i=1; i<=w; i++)
        {
            for(int j=w; j>=1; j--)
            {
                if(i%2==0 && j%2==0 && i+j==w)
                {
                    found =true;
                }
            }
        }

        if(found)
        {
            cout<<"YES"<<endl;

        }

    }
    if(!found)
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
