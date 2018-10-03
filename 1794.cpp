#include<bits/stdc++.h>
using namespace std;
#define maxn 100007

int sum[maxn<<2],n;
int a[maxn];

void PushUp(int rt){sum[rt]=sum[rt<<1] + sum[rt<<1|1];}
void Build(int l,int r,int rt)
{
    if(l==r)
    {
        sum[rt] = a[l];
        return;
    }
    int m = (l + r) >>1;
    Build(l,m,rt<<1);
    Build(m+1,r,rt<<1|1);
    PushUp(rt);
}

void Update(int L,int C,int l,int r,int rt)
{
    if(l == r){
        sum[rt] += C;
        return ;
    }
    int m = (l + r)>>1;
    if(L<=m) Update(L,C,l,m,rt<<1);
    else Update(L,C,m+1,r,rt<<1|1);
    PushUp(rt);
}

int Query(int L,int R,int l,int r,int rt)
{
    if(L <= l && r <= R)
    {
        return sum[rt];
    }
    int m = (l + r) >>1;
    int ans = 0;
    if(L <= m) ans+=Query(L,R,l,m,rt<<1);
    if(R > m) ans+=Query(L,R,m+1,r,rt<<1|1);
    return ans;
}

void solve(void)
{
    int flag = 1;
    int t;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d",&n);
        for(int i = 1 ; i <= n ; i++)
            scanf("%d",&a[i]);
        printf("Case %d:\n",flag++);
        Build(1,n,1);
        char a[10];
        while(scanf("%s",a),a[0]!='E')
        {
            if(a[0]=='A')
            {
                int x,y;
                scanf("%d%d",&x,&y);
                Update(x,y,1,n,1);
            }
            else if(a[0]=='S')
            {
                int i,j;
                scanf("%d%d",&i,&j);
                j = 0 - j;
                Update(i,j,1,n,1);
            }
            else
            {
                int x,y;
                scanf("%d%d",&x,&y);
                printf("%d\n",Query(x,y,1,n,1));
            }
        }
    }
}


int main(void)
{
    solve();
    return 0;
}
