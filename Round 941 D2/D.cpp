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
    vector<int>ans;
    int total=0;
    int it=1;
    while(total<k)
    {
        ans.pb(it);
        total+=it;
        it*=2;
    }
    it/=2;
    ans.pop_back();
    int dif=k-(total-it)-1;
    int bad=it-dif;
    ans.pb(dif);
    ans.pb(it+dif+1);
    it*=2;
    ans.pb(it);
    ans.pb(it+bad);
    it*=2;
    while(ans.size()<25)
    {
        ans.pb(it);
        it*=2;
    }
    cout<<ans.size()<<endl;
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;

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

