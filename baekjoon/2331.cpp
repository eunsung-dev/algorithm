// 반복수열
#include <iostream>
#include <cmath>
using namespace std;
int check[1000000] = {0,};
int next(int a, int p){
    int ans = 0;
    while(a != 0){
    ans += pow(a%10, p);
    a /= 10;
    }
    return ans;
}
int length(int a, int p, int cnt){
    if(check[a] != 0)
        return check[a] - 1;
    check[a] = cnt;
    int b = next(a,p);
    return length(b, p, cnt+1);
}
int main(void){
    int A, P;
    cin >> A >> P;
    cout << length(A, P, 1);
    return 0;
}