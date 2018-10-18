#include<stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int ans = 0;
        for(int i = 0 ; i < n ; i++)
        {
            int flag = 0;
            for(int j = 0 ; j < m ; j++)
            {
                int grade;
                scanf("%d",&grade);
                if(grade > 80)
                    flag ++;
            }
            if(flag >=3)
                ans++;
        }
        printf("%d\n",ans);
    }
}
