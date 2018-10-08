#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[51];

void init(void)
{
    a[0] = a[1] = 1;
    for(int i = 2 ; i <= 50 ; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
}

int main(void)
{
    init();
    int n;
    while(~scanf("%d",&n))
    {

        for(int i = 0 ; i<= 50 ; i++)
        {
            for(int j = i ; j <= 50 ; j++)
            {
                for(int k = j ; k <= 50 ; k++)
                {
                    if(a[i] + a[j] + a[k] == n)
                    {
                        printf("%lld %lld %lld\n",a[i],a[j],a[k]);
                        goto ennd;
                    }
                }
            }
        }
        printf("-1\n");
        ennd:;
    }
    return 0;
}
