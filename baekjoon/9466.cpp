// 텀 프로젝트
#include <iostream>
using namespace std;
int a[100001] = {0,};
int check[100001] = {0,};
int s[100001] = {0,};
int dfs(int x, int cnt, int &step){
    if(check[x] != 0){
        if(step != s[x])
            return 0;
        return cnt-check[x];
    }
    check[x] = cnt;
    s[x] = step;
    return dfs(a[x], cnt+1, step);
}
int main(void){
    int T;
    scanf("%d", &T);
    while(T--){
        int n;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++){
            scanf("%d", &a[i]);
            check[i] = 0;
            s[i] = 0;
        }
        int ans = 0;
        for(int i = 1; i <= n; i++){
            if(check[i] == 0)
                ans += dfs(i, 1, i);
        }
        printf("%d\n", n-ans);
    }
    return 0;
}