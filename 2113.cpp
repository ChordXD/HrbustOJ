using namespace std;
#include<bits/stdc++.h>
#define maxn 1000006
int ans[maxn];
int temp[maxn];

int main(void)
{
    int n;
    std::ios::sync_with_stdio(false);
    while(cin>>n)
    {
       map<string,int>p;
       memset(ans,0,sizeof ans);
       memset(temp,0,sizeof temp);
       int cot = 0; // 给每个出现的字符串打上标签
       for(int i = 0 ; i < n ; i++)
       {
           string a;
           cin>>a;
           if(p[a]==0) //判断是否是第一次出现的字符串 
           {
               cot++;
               p[a] = cot; //让map映射一下，表明其不是第一次出现了。同时用p[a]记录这个字符串的编号。
               ans[cot]++;//相应编号所对应的出现次数+1.
           }
           else
           {
               ans[p[a]]++;//p[a]是字符串的编号，对应编号出现次数+1.
           }
       }
       int sum = 0;
       for(int i = 0 ; i < maxn ;i++)
       {
           if(ans[i])///从小到大找一遍。
           {
               temp[ans[i]]++;///类似桶排的思路
               //sum++;
           }
       }
       for(int i = 0 ; i < maxn; i++)
       {
           if(temp[i])
           {
               printf("%d %d\n",i,temp[i]);
           }
       }
    }
    return 0;
}
