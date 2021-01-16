// 스티커
#include <iostream>
#define max(a,b) (((a)>(b))?(a):(b))
using namespace std;
int main(void){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        long long A[100001][2];
        for(int i = 1; i <= n; i++){
                cin >> A[i][0];
        }
        for(int i = 1; i <= n; i++){
                cin >> A[i][1];
        }        
        long long d[100001][3];
        d[0][0] = d[0][1] = d[0][2] = 0;
        for(int i = 1; i <= n; i++){
                    d[i][0] = max(d[i-1][0], max(d[i-1][1], d[i-1][2]));
                    d[i][1] = max(d[i-1][0],d[i-1][2]) + A[i][0];
                    d[i][2] = max(d[i-1][0], d[i-1][1]) + A[i][1];

            }
        long long ans = 0;
        for (int i=1; i<= n; i++) {
            ans = max(max(ans,d[i][0]),max(d[i][1],d[i][2]));
        }
        cout << ans << endl;
    }
    return 0;
}