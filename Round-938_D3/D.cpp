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
    int n, m, k;
    cin>>n>>m>>k;
    map<int, int>s, d;
    s.clear(), d.clear();
    vector<int>a(n, 0), b(m, 0);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
        s[b[i]]++;
    }
    int cnt=0, ans=0;
    for(int i=0; i<m; i++)
    {
        d[a[i]]++;
        if(s[a[i]]>0 and d[a[i]]<=s[a[i]])
        {
            cnt++;
        }
    }
    if(cnt>=k)
    {
        ans++;
    }
    int l=0, r=m;
    while(r<n)
    {
        d[a[r]]++;

        if(s[a[r]]>0 and d[a[r]]<=s[a[r]])
        {
            cnt++;
        }
        d[a[l]]--;
        if(s[a[l]]>0 and d[a[l]]<s[a[l]])
        {
            cnt--;
        }
        if(cnt>=k)
        {
            ans++;
        }
        l++, r++;
    }
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

