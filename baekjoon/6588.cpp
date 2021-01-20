// 골드바흐의 추측
#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
    const int MAX = 1000000;
    int p[MAX+1] ={0,};
    bool check[MAX+1]; // true: 지워짐, false: 지워지지 않음
    for (int i=2; i<=MAX; i++) {
        if (check[i] == false) {
            p[i] = i;
            for (int j=i+i; j<=MAX; j+=i) {
                check[j] = true;
            }
        }
    }
    while(true){
        int n;
        scanf("%d", &n);
        if(n == 0)
            break;
        for(int i = 1; i <= n; i++){
                if(p[i] + p[n-i] == n){
                    printf("%d = %d + %d\n",n,p[i],p[n-i]);
                    break;
                }
            }
        }
    return 0;
}