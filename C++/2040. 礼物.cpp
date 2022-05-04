#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1010;
int n, b;

struct gift
{
    int p, s;
    bool operator<(const gift& t)
    {
        return p + s < t.p + t.s;
    }
}g[N];

int main()
{
    cin >> n >> b;
    for (int i = 0; i < n; i ++ ) cin >> g[i].p >> g[i].s;
    
    sort(g, g + n);
    
    int res = 0;
    for(int k = 0; k < n; k++)
    {
        int total = b - (g[k].p / 2 + g[k].s);
        if(total < 0) continue;
        int cnt = 1;
        for (int i = 0; i < n; i ++ )
        {
            if(i != k && total >= g[i].p + g[i].s)
            {
                total -= g[i].p + g[i].s;
                cnt++;
            }
        }
        res = max(res, cnt);
    }
    
    cout << res;
    return 0;
}
