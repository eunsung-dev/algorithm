// 순열 사이클
#include <iostream>
#include <vector>
int a[1001];
bool check[1001];
void dfs(int node){
    if(check[node])
        return;
    check[node] = true;
    dfs(a[node]);
}
int main(void){
    int T;
    scanf("%d", &T);
    while(T--){
        int n;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++){
            a[i] = 0;
            check[i] = false;
        }
        for(int i = 1; i <= n; i++){
            scanf("%d", &a[i]);
        }
        int ans = 0;
        for(int i = 1; i <= n; i++){
            if(check[i] == false){
                dfs(i);
                ans += 1;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}