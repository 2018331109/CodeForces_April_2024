#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF = 1e18;
const int md = 998244353;
const int mod = 1e9 + 7;
const int N=2e5+5;

void solve()
{
    int n, c, d;
    cin>>n>>c>>d;
    map<int, int>mp;
    int mn=INT_MAX;
    for(int i=0; i<n*n; i++)
    {
        int x;
        cin>>x;
        mn=min(mn, x);
        mp[x]++;
    }
    int vl;
    for(int i=0; i<n; i++)
    {
        vl=mn+(i*c);
        for(int j=0; j<n; j++)
        {
            if(mp[vl]<=0)
            {
                no;
                return;
            }
            else
            {
                mp[vl]--;
            }
            vl+=d;
        }
        vl+=c;

    }
    yes;
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

