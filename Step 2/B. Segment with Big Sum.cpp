#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
const int N = 1e5 + 128, INF = 2e9;
int a[N];

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; long long s; cin >> n >> s;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    } 
    int ans = INF;
    long long sum = 0;
    int r = 1;
    for (int l = 1; l <= n; l++)
    {
        while(r <= n and sum + a[r] < s)
        {
            sum += a[r];
            r++;
        }

        if(r <= n)
        {
            ans = min(ans, (r - l) + 1);
            sum -= a[l];
        }
    }
    cout << (ans != INF ? ans : -1) << endl;
    return 0;
}
