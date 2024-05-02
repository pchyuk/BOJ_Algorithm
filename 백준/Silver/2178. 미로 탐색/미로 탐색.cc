#include <iostream>
#include <queue>
using namespace std;

int maze[101][101];
bool visited[101][101];

int dr[] = {-1, 1, 0, 0}; // 상하
int dc[] = {0, 0, -1, 1}; // 좌우

void BFS(int x, int y, int n, int m){
    queue<pair<int, int>> q;
    q.push(make_pair(x,y));
    while(!q.empty()){ // 큐가 비어있지 않다면
        int tmp_x = q.front().first;
        int tmp_y = q.front().second;
        q.pop();

        for(int i=0; i<4; i++){
            int dx = tmp_x + dr[i];
            int dy = tmp_y + dc[i];

            if(dx >= 0 && dx < n && dy >= 0 && dy < m){
                if(!visited[dx][dy] && maze[dx][dy] != 0){
                    visited[dx][dy] = true;
                    maze[dx][dy] = maze[tmp_x][tmp_y] + 1;
                    q.push(make_pair(dx, dy));
                }
            }
        }
        if(tmp_x == n-1 && tmp_y == m-1) return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        string tmp;
        cin >> tmp;
        for(int j=0; j<m; j++){
            maze[i][j] = tmp[j] - '0';
        }
    }

    BFS(0,0,n,m);

    
    cout << maze[n-1][m-1] << "\n";
    return 0;
}