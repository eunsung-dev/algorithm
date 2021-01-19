// 최소공배수
#include <iostream>
using namespace std;
int gcd(int a, int b){
    if(b == 0)
        return a;
    else{
        return gcd(b, a%b);
    }
}
int main(void){
    int T;
    cin >> T;
    while(T--){
        long long a, b;
        cin >> a >> b;
        long long g = gcd(a, b);
        cout << (a*b) / g << endl;
    }
    return 0;
}