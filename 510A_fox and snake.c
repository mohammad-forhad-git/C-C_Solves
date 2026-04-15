#include<stdio.h>
int main()
{
    int n,m;
   int  value1=0;
   int value2=0;
    scanf("%d%d",&n,&m);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if (i%2!=0 )
            {
                printf("#");
            }
            value1++;
            else if(value1/i==1 && j==1)
            {
                printf("#");
            }

            else {
                printf(".");
            }
        }
        printf("\n");
    }}
