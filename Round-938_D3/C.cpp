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
    int n, k;
    cin>>n>>k;
    vector<int>v(n, 0);
    int f=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int i=0, j=n-1;
    int ans=0;
    while(i<j and k>0)
    {
        if(f==0)
        {
            int l=v[i], r=v[j];
            if(l<=r)
            {

                int need=(l*2)-1;
                if(need<=k)
                {
                    ans++;
                    k-=need;
                    v[i]=0;
                    i++;
                    v[j]-=(l-1);
                    f=1;
                }
                else
                {
                    k=0;
                    break;
                }
            }
            else
            {
                int need=r*2;
                if(need<=k)
                {
                    ans++;
                    k-=need;
                    v[j]=0;
                    j--;
                    v[i]-=r;
                    f=0;
                }
                else
                {
                    k=0;
                    break;
                }
            }
        }
        else
        {
            int l=v[j], r=v[i];
            if(l<=r)
            {
                int need=l*2-1;
                if(need<=k)
                {
                    ans++;
                    k-=need;
                    v[j]=0;
                    j--;
                    v[i]-=(l-1);
                    f=0;

                }
                else
                {
                    k=0;
                    break;
                }
            }
            else
            {
                int need=r*2;
                if(need<=k)
                {
                    ans++;
                    k-=need;
                    v[i]=0;
                    i++;
                    v[j]-=r;
                    f=1;
                }
                else
                {
                    k=0;
                    break;
                }
            }
        }
    }
    if(i==j and k>=v[i])
    {
        ans++;
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

