/// Abdur Rahman Salman ///

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
const int N = 1e5 + 128;
int a[N];

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; long long s; cin >> n >> s;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    } 
    long long ans = 0;
    long long sum = 0;
    int r = 0;
    for (int l = 0; l < n; l++)
    {
        while(r < n and sum + a[r] <= s)
        {
            sum += a[r];
            r++;
        }
        ans += r - l;
        sum -= a[l];
    }
    cout << ans << endl;
    return 0;
}
