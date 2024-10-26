#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
vector<int> merge(vector<int> &l, vector<int> &r)
{
    vector<int> ans;
    int n = l.size(), m = r.size();
    int i = 0, j = 0;
    while(i < n and j < m)
    {
        if(l[i] < r[j]) ans.push_back(l[i++]);
        else ans.push_back(r[j++]);
    }
    while(i < n) ans.push_back(l[i++]);
    while(j < m) ans.push_back(r[j++]);
    return ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vector<int> ans = merge(a, b);
    for(auto u : ans) cout << u << ' ';
    return 0;
}

