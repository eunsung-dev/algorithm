// 합분해
#include <iostream>
using namespace std;
int main(void){
    int N, K;
    cin >> N >> K;
    long long d[201][201] = {0,};
    long long mod = 1000000000;
    d[0][0] = 1LL;
    for(int i = 1; i <= K; i++){
        for(int j = 0; j <= N; j++){
            for(int l = 0; l <= j; l++){
                d[i][j] += d[i-1][j-l];
                d[i][j] %= mod;
            }
        }
    }
    cout << d[K][N];
    return 0;
}