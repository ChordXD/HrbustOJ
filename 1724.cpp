#include<bits/stdc++.h>
using namespace std;

void solve(void)
{
    std::ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string ans;
        cin>>ans;
        for(int i = 0 ; i < n - 1 ; i ++)
        {
            string t;
            cin>>t;
            for(int i = 0 ; i < 32 ; i++)
            {
                if(ans[i] == t[i])
                {
                    ans[i] = '0';
                }
                else ans[i] = '1';
            }
        }
        cout<<ans<<endl;
    }
}

int main(void)
{
    solve();
    return 0;
}
