#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1010;
int n;
bool s[N][N];
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

int get(int x, int y)
{
    int c = 0;
    for(int i = 0; i < 4; i++)
    {
        int a = x + dx[i], b = y + dy[i];
        if(s[a][b]) c++;
    }
    return c;
}

int main()
{
    cin >> n;
    int res = 0;
    while(n--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        x++, y++;
        s[x][y] = true;
        
        if(get(x, y) == 3) res++;
        
        for(int i = 0; i < 4; i++)
        {
            int a = x + dx[i], b = y + dy[i];
            if(s[a][b])
            {
                int t = get(a, b);
                if(t == 3) res++;
                else if(t == 4) res--;
            }
        }
        printf("%d\n", res);
    }
    return 0;
}
