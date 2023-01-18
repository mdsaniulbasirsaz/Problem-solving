#include<bits/stdc++.h>
using namespace std;

void valid_paren (string input)
{
 
 stack <char> s;
 int length = input.length();
 char top;
 
 for(int i = 0; i< length; i++){
  
   if(input[i] == '('  input[i] == '{'  input[i] == '['){
     s.push(input[i]);
   }
   else
   { 
     if(s.empty()){
       cout<<input<<" contains invalid parentheses."<<endl;
       return;
     }
      else{
      top = s.top();
     
      if(input[i] == ')' && top == '('  
        input[i] == '}' && top == '{' 
        input[i] == ']' && top == '[') {
        s.pop();
      }
      else{
        
        cout<<input<<" contains invalid parentheses."<<endl;
        return;
      }
     }
   }
 }

 if (s.empty()){
   cout<<"true"<<endl;
 }
 else{
   cout<<"false"<<endl;
 }
}
int main() {
    string s;
    cin>>s;

valid_paren(s);
 return 0;
}
