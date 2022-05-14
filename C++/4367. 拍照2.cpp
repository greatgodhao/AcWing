#include <iostream>

using namespace std;

const int N = 1e5 + 10;
int a[N], b[N];
bool st[N];

int main() 
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++ ) cin >> a[i];
    for (int i = 0; i < n; i ++ ) cin >> b[i];
    int ans = 0;
    for (int i = n - 1, j = n - 1; i >=0 && j >= 0; j --, i-- )
    {
        while(st[b[j]]) j--;
        while(a[i] != b[j])
        {
            st[a[i--]] = 1;
            ans++;
        }
    }
    cout << ans;
    return 0;
}
