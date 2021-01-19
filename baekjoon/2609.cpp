// 최대공약수와 최소공배수
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
    int a, b;
    cin >> a >> b;
    int g = gcd(a, b);
    cout << g << endl << (a*b)/g;
    return 0;
}