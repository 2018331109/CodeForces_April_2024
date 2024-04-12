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
    int last=-1;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=INT_MAX;
    for(int i=1;i<n-1;i++)
    {
        if(a[i-1]==a[i+1] and a[i]!=a[i-1] and a[i-1]==a[0])
        {
            ans=min(ans, i-last-1);
            last=i;
        }
    }

    if(ans==INT_MAX)
    {
        neg;
        return;
    }
    ans=min(ans, n-last-1);
    cout<<ans<<endl;
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

