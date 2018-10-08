#include <bits/stdc++.h>
#define LL long long
using namespace std;

const int N=1e6+10;
LL num[N],a[N];
LL ans;
void Merge(int l,int mid,int r)
{
    int i=l,j=mid+1,k=l;
    while(i<=mid&&j<=r)
    {
        if(num[i]>num[j])
        {
            a[k++]=num[j++];
            ans+=mid-i+1;
        }
        else
            a[k++]=num[i++];
    }
    while(i<=mid)
        a[k++]=num[i++];
    while(j<=r)
        a[k++]=num[j++];
    for(int e=l;e<=r;e++)
        num[e]=a[e];
}

void Merge_sort(int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        Merge_sort(l,mid);
        Merge_sort(mid+1,r);
        Merge(l,mid,r);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    while(cin>>n&&n)
    {
        for(int i=0;i<n;i++)
            cin>>num[i];
        ans=0;
        Merge_sort(0,n-1);
        cout<<ans<<endl;
    }
    return 0;
}
