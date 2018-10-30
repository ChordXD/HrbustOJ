#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        vector<int>a;
        int maxn = 0;
        for(int i = 0 ; i < n ; i++)
        {
            int t;
            scanf("%d",&t);
            a.push_back(t);
            maxn = max(t,maxn);
        }
        int l = maxn , r = 10000000;
        while(l <= r)
        {
            int mid = (l + r) >> 1;
            int need = 1;
            int ssum = 0;
            for(int i = 0 ; i< n ; i++)
            {
                if(ssum + a[i] <= mid)
                {
                    ssum += a[i];
                }
                else
                {
                    need++;
                    ssum = a[i];
                }
            }
            if(need > m) l = mid + 1;
            else r = mid - 1;
        }
        printf("%d\n",l);
    }
  //  system("pause");
    return 0;
}