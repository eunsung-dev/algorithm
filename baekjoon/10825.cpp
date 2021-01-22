// 국영수
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
// #include <tuple>
using namespace std;
struct student{
    string name;
    int kor, eng, math;
};
bool cmp(const student &u, const student &v){
    if (u.kor > v.kor) {
        return true;
    } else if (u.kor == v.kor) {
        if (u.eng < v.eng) {
            return true;
        } else if (u.eng == v.eng) {
            if (u.math > v.math) {
                return true;
            } else if (u.math == v.math) {
                return u.name < v.name;
            }
        }
    }
    return false;
}
int main(void){
    int N;
    cin >> N;
    vector<student> s(N);
    for(int i = 0; i < N; i++){
        cin >> s[i].name >> s[i].kor >> s[i].eng >> s[i].math;
    }
    sort(s.begin(), s.end(), cmp);
    for(int i = 0; i < N; i++){
        cout << s[i].name << '\n';
    }
    return 0;
}