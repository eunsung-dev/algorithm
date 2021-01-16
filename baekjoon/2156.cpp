#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    long long A[n+1];
    for(int i = 1; i <= n; i++)
        cin >> A[i];
    long long d[n+1];
    d[0] = 0;
    d[1] = A[1];
    d[2] = A[1] + A[2];
    for(int i = 3; i <= n; i++){
        d[i] = d[i-1];
        if(d[i] < d[i-2] + A[i])
            d[i] = d[i-2] + A[i];
        if(d[i] < d[i-3] + A[i-1] + A[i])
            d[i] = d[i-3] + A[i-1] + A[i];
    }
    cout << d[n];
    return 0;
}