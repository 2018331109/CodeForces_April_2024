#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int m=32;
const int md=998244353;
const int N=200005;


void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int>mp(101, 0);
    int f=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(++mp[x]>=k)
        {
            f=1;
        }
    }
    if(f)
    {
        cout<<k-1<<endl;
    }
    else
    {
        cout<<n<<endl;
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

