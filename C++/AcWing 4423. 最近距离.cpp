#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1e6;
int a[N], b[N];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++ ) cin >> a[i];
    for (int i = 0, last = -N; i < n; i ++ )
    {
        if(!a[i])
        {
            last = i;
        }
        b[i] = i - last;
    }
    for (int i = n - 1, last = 2 * N; i >= 0; i -- )
    {
        if(!a[i])
        {
            last = i;
        }
        b[i] = min(b[i], last - i);
    }
    for (int i = 0; i < n; i ++ )
    {
        cout << b[i] << ' '; 
    }
    return 0;
}
