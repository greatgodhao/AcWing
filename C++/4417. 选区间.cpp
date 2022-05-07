#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int a = 1e9, b = -1e9;
    for(int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        a = min(a, r);
        b = max(b, l);
    }
    int ans = 0;
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        if(a < l) ans = max(ans, l - a);
        if(b > r) ans = max(ans, b - r);
    }
    cout << ans;
    return 0;
}
