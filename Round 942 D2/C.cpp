#include <bits/stdc++.h>
using namespace std;
#define int long long int
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
    int n, k;
    cin>>n>>k;
    int ans=INT_MIN;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);

    int l=1, r=1e13;

    while(l<r)
    {
        int mid=(l+r)/2;
        //cout<<"mid "<<mid<<endl;
        int cnt=0;
        int i=n-1, op=k;
        while(i>=0 and op>=0)
        {
            if(a[i]>=mid)
            {
                if(a[i]>mid)
                {
                    cnt++;
                }
                i--;
                continue;
            }
            else
            {
                if(mid-a[i]>op)
                {
                    break;
                }
                else
                {
                    op-=(mid-a[i]);
                    i--;
                }
            }

        }
        if(i<0)
        {
            l=mid+1;
            cnt=min(n, cnt+op);
            //cout<<"cnt "<<cnt<<endl;
            ans=max(ans, (n*mid)-n+1+cnt);
        }
        else
        {
            r=mid;
        }
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

