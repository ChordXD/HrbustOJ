int check(string a)
{
    if(a == "Monday") return 1;
    if(a == "Tuesday") return 2;
    if(a == "Wednesday") return 3;
    if(a == "Thursday") return 4;
    if(a == "Friday") return 5;
    if(a == "Saturday") return 6;
    return 7;
}

void solve(void)
{
    std::ios::sync_with_stdio(false);
    map<int,string>p;
    p[1] = "Monday";
    p[2] = "Tuesday";
    p[3] = "Wednesday";
    p[4] = "Thursday";
    p[5] = "Friday";
    p[6] = "Saturday";
    p[0] = "Sunday";
    string a;
    int year;
    while(cin>>a>>year)
    {
        int run = year/4;
        int day = run * 366 + (year - run) * 365;
        cout<<p[(check(a) + day)%7]<<endl;
    }
}

int main(void)
{
    solve();
    return 0;
}