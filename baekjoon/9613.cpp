// GCD 합
#include <iostream>
using namespace std;
int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}
int main(void){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[101] = {0,};
        long long sum = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j < i; j++){
                sum += gcd(a[i],a[j]);
            }
        }
        cout << sum << endl;
    }
    return 0;
}