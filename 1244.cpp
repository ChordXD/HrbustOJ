#include<cstdio>
#include<cmath>
#define pi acos(-1.0)
using namespace std;
const double delta = 1e-8;
const int maxn = 1e4;
int zero(double x)
{
    if(x < -delta)
        return -1;
    return x > delta;
}
double f[maxn];

int init(void)
{
    f[0] = 0.0;
    int flag = 1;
    for(int i = 2 ; zero(f[flag - 1] - 5.20)  < 0;i++,flag++ )
    {
        f[flag] = f[flag - 1] + 1.0/(double)i;
       // printf("%f\n",f[flag]);
    }
    return flag - 1;
}
int main(void)
{
    int vis = init();
    double n;
    while(scanf("%lf",&n),zero(n) != 0)
    {
        int l = 1,r = vis ;
        while(l <= r)
        {
            int mid = (l+r)>>1;
            if(zero(f[mid] - n) < 0) l = mid + 1;
            else r = mid - 1;
        }
        printf("%d card(s)\n",l);
    }
    return 0;
}
