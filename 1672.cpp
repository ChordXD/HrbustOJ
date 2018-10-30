#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    while(~scanf("%d",&n))
    {
        int sum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            int a;
            scanf("%d",&a);
            sum += a;
        }
        int need = 0;
       // printf("%d\n",sum);
        for(int i = 1 ; i <= 5 ; i++)
        {
            int t;
            t = sum + i;
            if(t%(n + 1) == 1) need++;
        }
        printf("%.2f\n",1.00 - (double)need / 5.0);
    }
    return 0;
}
