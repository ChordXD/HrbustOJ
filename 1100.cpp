using namespace std;
#include<bits/stdc++.h>
const int maxn = 1e6 + 7;
const int mod = 10007;
int ans = 0;
int a[maxn];
void init(void)
{
    a[0] = 1;
    a[1] = 2;
    a[2] = 4;
    ans = 3;
    while(1)
    {
        a[ans] = (a[ans - 1] + a[ans - 2] + 1)%mod;
        if(a[ans]==a[2]&&a[ans-1]==a[1]&&a[ans-2]==a[0])
            break;
        ans++;
    }
}

int main(void)
{
    init();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",a[n%(ans-2)]);
    }
    return 0;
}
