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
    int n, m;
    cin>>n>>m;
    vector<string>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    if(v[0][0]==v[n-1][m-1] or v[0][m-1]==v[n-1][0])
    {
        yes;
        return;
    }
    if(v[0][0]==v[n-1][0])
    {
        int j=m-1;
        for(int i=1; i<n-1; i++)
        {
            if(v[i][j]==v[0][0])
            {
                yes;
                return;
            }
        }
    }
    if(v[0][m-1]==v[n-1][m-1])
    {
        int j=0;
        for(int i=1; i<n-1; i++)
        {
            if(v[i][j]==v[0][m-1])
            {
                yes;
                return;
            }
        }
    }
    if(v[0][0]==v[0][m-1])
    {
        int i=n-1;
        for(int j=1; j<m-1; j++)
        {
            if(v[i][j]==v[0][0])
            {
                yes;
                return;
            }
        }
    }
    if(v[n-1][0]==v[n-1][m-1])
    {
        int i=0;
        for(int j=1; j<m-1; j++)
        {
            if(v[i][j]==v[n-1][0])
            {
                yes;
                return;
            }
        }
    }
    no;
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

