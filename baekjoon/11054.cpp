// 가장 긴 바이토닉 부분 수열
#include <iostream>
using namespace std;
int main(void){
    int N;
    cin >> N;
    long long A[1001] = {0,};
    long long d[1001] = {0,};
    long long d2[1001] = {0,};
    for(int i = 1; i <= N; i++){
        cin >> A[i];
    }
    for(int i = 1; i <= N; i++){
        d[i] = 1;
        for(int j = 1; j < i; j++){
            if((A[i] > A[j]) & (d[i] < d[j] + 1)){
                d[i] = d[j] + 1;
            }
        }
    }
    for (int i = N; i >= 1; i--) {
            d2[i] = 1;
            for (int j = i; j <= N; j++) {
                if (A[i] > A[j] && d2[j]+1 > d2[i]) {
                    d2[i] = d2[j]+1;
                }
            }
        }
    long long ans = 0;
    for(int i = 1; i <= N; i++){
        if(ans < (d[i] + d2[i] - 1))
            ans = d[i] + d2[i] - 1;
    }
    cout << ans;
    return 0;
}