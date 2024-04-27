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
    int n;
    cin>>n;
    int f=0;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    int i=0;
    int cnt=0;
    while(i<n)
    {
        if(a[i]-cnt>1)
        {
            break;
        }
        while(i<n and a[i]-cnt==1)
        {
            i++;
        }
        cnt++;
        if(i<n)
        {
            f^=1;
        }
    }

    if(f==0)
    {
        cout<<"Alice"<<endl;
    }
    else
    {
        cout<<"Bob"<<endl;
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

