using namespace std;
#include<bits/stdc++.h>


int main(void)
{
    int n;
    while(~scanf("%d",&n))
    {
        int lenth = 0;
        int maxn = n*n;
        while(maxn>0)
        {
            lenth++;
            maxn/=10;
        }
        lenth++;
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= i ; j++)
            {
                printf("%*d x %*d = %*d%c",lenth,i,lenth,j,lenth,i*j,j==i ? '\n' : ' ');
            }
        }
        puts("");
    }
    return 0;
}
