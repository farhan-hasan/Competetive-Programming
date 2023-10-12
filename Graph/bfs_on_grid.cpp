#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+7;
int n,m;
queue<pair<int,int>>q;
char l[N][N];
bool vis[N][N];
int dis[N][N];

int dRow[] = { -1, 0, 1, 0 };
int dCol[] = { 0, 1, 0, -1 };

bool isValid(int row, int col)
{
    if (row < 0 || col < 0 || row >= n || col >= m)
        return false;

    if (vis[row][col])
        return false;

    return true;
}

void bfs(int x, int y) {
    q.push({x,y});
    vis[x][y]=true;
    dis[x][y]=0;
    while(!q.empty()) {
        int u = q.front().first;
        int v = q.front().second;
        q.pop();

        for(int i=0;i<4;i++) {
            int adju = u+dRow[i];
            int adjv = v+dCol[i];

            if(isValid(adju,adjv)) {
                    q.push({adju,adjv});
                    vis[adju][adjv] = true;
                    dis[adju][adjv] = dis[u][v] + 1;
            }
        }
    }

}

int main () {

    cin >> n >> m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> l[i][j];
        }
    }
    bfs(0,0);//O(node+edge)
}
