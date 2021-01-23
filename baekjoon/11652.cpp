// 카드
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    int N;
    scanf("%d", &N);
    vector<long long> a(N);
    for(int i = 0; i < N; i++){
        scanf("%lld", &a[i]);
    }
    sort(a.begin(), a.end());
    long long ans = a[0];
    int ans_cnt = 1;
    int cnt = 1;
    for(int i = 1; i < N; i++){
        if(a[i] == a[i-1]){
            cnt += 1;
        }
        else{
            cnt = 1;
        }
        if(ans_cnt < cnt){
            ans_cnt = cnt;
            ans = a[i];
        }
    }
    printf("%lld", ans);
    return 0;
}