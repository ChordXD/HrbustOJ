#include<bits/stdc++.h>
using namespace std;

#define maxn 1000000

char str[maxn];
char ptr[maxn];
int nt[maxn];

void get_next(int plen)
{
    memset(nt,0,sizeof nt);
    nt[0] = -1;
    int k = -1;
    for(int i = 1 ; i < plen ; i++)
    {
        while(k > -1 && ptr[k+1]!=ptr[i])
        {
            k = nt[k];
        }
        if(ptr[k+1]==ptr[i]) k++;
        nt[i] = k;
    }
}

int kmp(int slen,int plen)
{
    int k = -1;
    get_next(plen);
    for(int i = 0 ; i < slen ; i++)
    {
        while(k>-1&&str[i]!=ptr[k+1])
        {
            k = nt[k];
        }
        if(ptr[k+1]==str[i])
        {
            k++;
        }
        if(k==plen-1)
        {
            return i - plen + 1;
        }
    }
    return -1;
}

int main(void)
{
    while(~scanf("%s%s",ptr,str))
    {

        int slen = strlen(str);
        for(int i = 0 ; i < slen ; i++)
        {
            str[slen + i] = str[i];
        }
        slen*=2;
        int plen = strlen(ptr);
        int ans = kmp(slen,plen);
        if(ans!= -1 && ans!=0)
        {
            puts("yes");
        }
        else
            puts("no");

    }
    return 0;
}

