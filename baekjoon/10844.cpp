// 쉬운 계단 수
#include <iostream>
using namespace std;
int main(void){
    int N;
    cin >> N;
    long long d[N+1][10];
    long long mod = 1000000000;
    d[1][0] = 0;
    for(int i = 1; i <= 9; i++){
        d[1][i] = 1;
    }
    for(int i = 2  ; i <= N; i++){
        for(int j = 0; j <= 9; j++){
            d[i][j] = 0;
            if(j >= 1){
                d[i][j] += d[i-1][j-1];
            }
            if(j <= 8){
                d[i][j] += d[i-1][j+1];
            }
            d[i][j] %= mod;
        }
    }
    long long ans = 0;
    for(int i = 0; i < 10; i++){
        ans += d[N][i];
    }
    cout << ans%mod;
    return 0;
}