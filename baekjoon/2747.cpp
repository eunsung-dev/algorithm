// 피보나치 수
#include <iostream>
using namespace std;
int dp[100];
int fibonacci(int n){
    if(n <= 1)
        return n;
    else{
        if(dp[n] > 0)
            return dp[n];
        dp[n] = fibonacci(n-1) + fibonacci(n-2);
        return dp[n];
    }
}
int main(void){
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}