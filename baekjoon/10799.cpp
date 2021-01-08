// stack을 이용한 문제
#include <iostream>
#include <stack>
using namespace std;
int main(void){
    string stick;
    stack<int> s;
    int total = 0;
    cin >> stick;
    for(int i = 0; i < stick.size(); i++){
        if(stick[i] == '('){
            s.push(i);
        }
        else{
            if(s.top() + 1 == i){
                s.pop();
                total += s.size();
            }
            else{
                s.pop();
                total += 1;
            }
        }
    }
    cout << total;

    return 0;
}