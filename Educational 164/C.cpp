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
    string a, b;
    cin>>a>>b;
    int n=a.size(), i=0;
    while(a[i]==b[i])
    {
        i++;
    }
    int f=0;
    if(a[i]<b[i])
    {
        f=1;
    }
    i++;
    if(f==0)
    {
        while(i<n)
        {
            if(a[i]>b[i])
            {
                char it=a[i];
                a[i]=b[i];
                b[i]=it;

            }
            i++;
        }
    }
    else
    {
        while(i<n)
        {
            if(a[i]<b[i])
            {
                char it=a[i];
                a[i]=b[i];
                b[i]=it;

            }
            i++;
        }
    }
    cout<<a<<endl;
    cout<<b<<endl;

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

