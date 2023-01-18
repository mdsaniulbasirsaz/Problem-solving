#include<bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

bool isValid(const string& s) {
    stack<char> stack;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            stack.push(c);
        } else {
            if (stack.empty()) {
                return false;
            }
            if (c == ')' && stack.top() != '(') {
                return false;
            }
            if (c == '}' && stack.top() != '{') {
                return false;
            }
            if (c == ']' && stack.top() != '[') {
                return false;
            }
            stack.pop();
        }
    }
    return stack.empty();
}

int main() {
    string s;
    cout<<endl<<"Input: ";
    cin>>s;
    cout<<"Output :"<<endl;
    cout << boolalpha << isValid(s) <<endl;
    return 0;
}
