#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N=200005;


void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(auto it:s)
    {
        if(it=='U')
        {
            cnt++;
        }
    }
    if(cnt%2)
    {
        yes;//cout<<"Alice"<<endl;
    }
    else
    {
        no;//cout<<"Bob"<<endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

