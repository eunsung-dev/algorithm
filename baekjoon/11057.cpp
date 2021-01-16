// 오르막 수
#include <iostream>
using namespace std;
int main(void){
    int N;
    cin >> N;
    long long d[N+1][10];
    for(int i = 0; i < N+1; i++){
        for(int j = 0; j < 10; j++)
            d[i][j] = 0;
    }
    long long mod = 10007;
    for(int i = 0; i < 10; i++){
        d[1][i] = 1;
    }
    for(int i = 2; i <= N; i++){
        for(int j = 0; j <= 9; j++){
            for(int k = 0; k <= j; k++){
            d[i][j] += d[i-1][k];
            d[i][j] %= mod;
            }
        }
    }
    long long ans = 0;
    for(int i = 0; i <= 9; i++){
        ans += d[N][i];
    }
    cout << ans%mod;
    return 0;
}