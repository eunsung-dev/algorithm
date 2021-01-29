// 단지번호붙이기
#include <iostream>
#include <algorithm>
int a[30][30] = {0,};
int check[30][30] = {0,};
int dx[] = {0, 0, 1, -1};
int dy[] = {-1, 1, 0, 0};
int ans[25*25] = {0,};
using namespace std;
int n;
void dfs(int x, int y, int cnt){
    check[x][y] = cnt;
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(0 <= nx && nx <= n && 0 <= ny && ny <= n){
            if(a[nx][ny] == 1 && check[nx][ny] == 0)
                dfs(nx, ny, cnt);
        }
    }
}
int main(void){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            scanf("%1d", &a[i][j]);
        }
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1 && check[i][j] == 0){
                dfs(i, j, ++cnt);
            }
        }
    }
    printf("%d\n", cnt);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            ans[check[i][j]] += 1;
        }
    }
    sort(ans+1, ans+cnt+1);
    for(int i = 1; i <= cnt; i++){
        printf("%d\n", ans[i]);
    }
    return 0;
}