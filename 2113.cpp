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
       int cot = 0; // ��ÿ�����ֵ��ַ������ϱ�ǩ
       for(int i = 0 ; i < n ; i++)
       {
           string a;
           cin>>a;
           if(p[a]==0) //�ж��Ƿ��ǵ�һ�γ��ֵ��ַ��� 
           {
               cot++;
               p[a] = cot; //��mapӳ��һ�£������䲻�ǵ�һ�γ����ˡ�ͬʱ��p[a]��¼����ַ����ı�š�
               ans[cot]++;//��Ӧ�������Ӧ�ĳ��ִ���+1.
           }
           else
           {
               ans[p[a]]++;//p[a]���ַ����ı�ţ���Ӧ��ų��ִ���+1.
           }
       }
       int sum = 0;
       for(int i = 0 ; i < maxn ;i++)
       {
           if(ans[i])///��С������һ�顣
           {
               temp[ans[i]]++;///����Ͱ�ŵ�˼·
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
