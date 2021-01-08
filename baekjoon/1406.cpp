#include <iostream>
#include <stack>
using namespace std;
int main(void){
    string s;
    int M = 0;
    stack<char> left, right;
    cin >> s;
    cin >> M;
    for(int i = 0; i < s.size(); i++){
        left.push(s[i]);
    }
    while(M--){
        char what;
        cin >> what;
        if(what == 'L'){
            if(!(left.empty())){
                right.push(left.top());
                left.pop();
            }
        }
        else if(what == 'D'){
            if(!(right.empty())){
                left.push(right.top());
                right.pop();
            }
        }
        else if(what == 'B'){
            if(!(left.empty())){
                left.pop();
            }
        }
        else if(what == 'P'){
            char ch;
            cin >> ch;
            left.push(ch);
        }
    }
    while(!(left.empty())){
        right.push(left.top());
        left.pop();
    }
    while(!(right.empty())){
        cout << right.top();
        right.pop();
    }
    return 0;
}