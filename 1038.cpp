#include<cstdio>

int a[500][500];

int maxx(int a,int b){return a < b ? b : a;}

int main(void)
{
    int n;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= 2*i - 1 ; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(int i = n - 1 ; i >= 1 ; i--)
        {
            for(int j = 1 ; j <= 2*i - 1 ; j++)
            {
                a[i][j] += maxx(maxx(a[i + 1][j],a[i + 1][j + 1]),a[i + 1][j + 2]);
            }
        }
        printf("%d\n",a[1][1]);
    }
    return 0;
}