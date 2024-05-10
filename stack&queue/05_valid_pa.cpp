/*
 * valid parenthesis
 * here concept is of always the first closing bracket is just near 
*/

#include<iostream>
#include<stack>
using namespace std;
bool isValid(string input){
    int len = input.length();
    stack<char> s;
    int i = 0;
    while(i < len){
        if(input[i] == '[' || input[i] == '{' || input[i] == '('){
            s.push(input[i]);
        }else{
            if (s.empty()) return false;
            if (input[i] == ']' && s.top() != '[') return false;
            if (input[i] == '}' && s.top() != '{') return false;
            if (input[i] == ')' && s.top() != '(') return false;
            s.pop();
        }
        i++;
    }
    return(s.empty());
}
int main(){
    string input = "([{}()])";
    bool ans = isValid(input);
    cout<<ans<<endl;
    return 0;
}