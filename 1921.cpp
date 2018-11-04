#include<stdio.h>

#define ll long long

ll gcd(ll a,ll b)
{
     if(b==0)
          return a;
     else
          return gcd(b,a%b);
}

ll lcm(ll a,ll b)
{
    if(a < b)
    {
        ll t = a;
        a = b;
        b = t;
    }
    return a*b/gcd(a,b);
}

int main(void)
{
    ll a,b,c,n;
    while(~scanf("%lld%lld%lld%lld",&a,&b,&c,&n))
    {
        ll aa = n/a;
        ll bb = n/b;
        ll cc = n/c;
        ll ab = n/lcm(a,b);
        ll bc = n/lcm(b,c);
        ll ac = n/lcm(a,c);
        ll abc = n/lcm(lcm(a,b),c);
        printf("%lld\n",n - ab - ac - bc +2* abc);
    }
    return 0;
}