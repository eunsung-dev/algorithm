// 나이순 정렬
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
struct Person{
    int age;
    string name;
};
bool cmp(const Person &u, const Person &v){
    return u.age < v.age;
}
int main(void){
    int N;
    cin >> N;
    vector<Person> p(N);
    for(int i = 0; i < N; i++){
        cin >> p[i].age >> p[i].name;
    }
    stable_sort(p.begin(), p.end(), cmp);
    for(int i = 0; i < N; i++){
        cout << p[i].age << ' ' << p[i].name << '\n';
    }

    return 0;
}