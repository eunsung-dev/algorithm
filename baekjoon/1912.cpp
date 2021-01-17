// 연속합
#include <iostream>
#include <limits.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    int A[100001] = {0,};
    int d[100001] = {0,};
    for(int i = 1; i <= n; i++){
        cin >> A[i];
        d[i] = A[i];
    }
    for(int i = 1; i <= n; i++){
        if(d[i] < d[i-1] + A[i])
            d[i] = d[i-1] + A[i];
    }
    int ans = INT_MIN;
    for(int i = 1; i <= n; i++){
        if(ans < d[i])
            ans = d[i];
    }
    cout << ans;
    return 0 ;
}