// 좌표 정렬하기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    int N;
    cin >> N;
    vector<pair<int,int> > a(N);
    for(int i = 0; i < N; i++){
        scanf("%d %d", &a[i].first, &a[i].second);
    }
    sort(a.begin(),a.end());
    for(int i = 0; i < N; i++){
        printf("%d %d\n", a[i].first, a[i].second);
    }

    return 0;
}