// 가장 큰 증가 부분 수열
#include <iostream>
using namespace std;
int main(void){
    int N;
    cin >> N;
    int A[1001] = {0,};
    int d[1001] = {0,};
    for(int i = 1; i <= N; i++){
        cin >> A[i];
        d[i] = A[i];
    }
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= i; j++){
            if((A[i] > A[j]) & (d[i] < d[j] + A[i])){
                d[i] = d[j] + A[i];
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= N; i++){
        if(ans < d[i])
            ans = d[i];
    }
    cout << ans;
    return 0;
}