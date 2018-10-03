#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000];///斐波那契第45个就大于1e9了，暴力跑就好【xxx
void init(void)
{
    a[0] = 1;
    a[1] = 1;
    for(int i = 2 ; i <= 45 ; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
}

int main(void)
{
    init();
    int n;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i = 0 ; i <= 45  ; i++)
        {
            for(int j = i + 1 ; j <= 45 ; j++)
            {
                for(int k = j + 1 ; k <= 45 ; k++)
                {
                    if(a[i] + a[j] + a[k] == n)
                    {
                        printf("%lld %lld %lld\n",a[i],a[j],a[k]);
                        goto ennd;
                    }
                }
            }
        }
        printf("Not Found!\n");
ennd:
        ;
    }
    return 0;
}


