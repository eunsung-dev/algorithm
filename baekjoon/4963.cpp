// 섬의 개수
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int a[100][100] = {0,};
int check[100][100] = {0,};
int dx[] = {0,0,1,-1,1,1,-1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1};
int w,h;
void dfs(int x, int y, int cnt){
    check[x][y] = cnt;
    for(int i = 0; i < 8; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(0 <= nx && nx < h && 0 <= ny && ny < w){
            if(a[nx][ny] == 1 && check[nx][ny] == 0)
                dfs(nx, ny, cnt);
        }
    }
}
int main(void){
    while(true){
        scanf("%d %d", &w, &h);
        if(w == 0 && h == 0){
            break;
        }
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                scanf("%1d", &a[i][j]);
                check[i][j] = 0;
            }
        }
        int cnt = 0;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(a[i][j] == 1 && check[i][j] == 0)
                    dfs(i, j, ++cnt);
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
