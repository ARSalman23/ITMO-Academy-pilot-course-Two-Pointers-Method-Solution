#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
const int N = 1e5 + 128;
ll a[N];
struct DS
{
    multiset<ll> s;
    void push(ll x)
    {
        s.insert(x);
    }
    void erase(ll x)
    {
        s.erase(s.find(x));
    }
    ll get_min()
    {
        return *s.begin();
    }
    ll get_max()
    {
        return *(--s.end());
    }
    ll get()
    {
        return get_max() - get_min();
    }
}ds;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; ll k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    int r = 0;
    for(int l = 0; l < n; l++)
    {
        while(r < n)
        {
            ds.push(a[r]);
            if(ds.get() > k)
            {
                ds.erase(a[r]);
                break;
            }
            r++;
        }
        ans += r - l;
        ds.erase(a[l]);
    }
    cout << ans << endl;
    return 0;
}
