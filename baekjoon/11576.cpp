// Base Conversion
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void convert(int num, int base){
    if(num == 0)
        return;
    convert(num/base, base);
    cout << num%base << " ";
}
int main(void){
    int A, B, m;
    int value[26] = {0,};
    int sum = 0;
    char ans[26] = {0,};
    int size = 0;
    cin >> A >> B;
    cin >> m;
    for(int i = 1; i <= m; i++){
        cin >> value[i];
    }
    for(int i = 1; i <= m; i++){
        sum += value[i]*pow(A,m-i);
    }
    // while(sum > B - 1){
    //     if(sum % B == 0)
    //         ans[size] = '0';
    //     else
    //         ans[size] += char(sum % B +'0');
    //     sum /= B;
    //     size++;
    // }
    // ans[size] += (char)(sum + '0');
    // for(int i = size; i >= 0; i--){
    //     cout << ans[i] << " ";
    // }
    // cout << '\b';    
    convert(sum, B);
    return 0;
}