// 버블 소트
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    int N;
    scanf("%d", &N);
    vector<pair<int,int> > A(N);
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i].first);
        A[i].second = i;
    }
    sort(A.begin(),A.end());
    int ans = 0;
    for(int i = 0; i < N; i++){
        if(ans < A[i].second - i){
            ans = A[i].second - i;
        }
    }
    printf("%d", ans+1);
    return 0;
}