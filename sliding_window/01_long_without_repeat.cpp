// finding the longest substring without any repetiton of any letter
// c a d b z a b c d
// here longest substring -> z a b c d
// substring menas simultaneosuly
#include<iostream>
#include<map>
#include <unordered_map> 
using namespace std;
int longestStringWithoutRepeatition(string &s){
    if(s.length() == 0 || s.length() == 1){
        return s.length();
    }

    unordered_map<char, int> m;
    int n = s.length();
    int j=0, maxi = 0, i = 0;
    while(i<n){
        
        // this condition is important as if the inital element is already out then 
        // why would we go for it
        if(!m[s[i]] || j >= m[s[i]]){
            m[s[i]] = i;
            maxi = max(i-j+1, maxi);
            i++;
            continue;
        }
        
        j = m[s[i]];
        j++;
        maxi = max(i-j+1, maxi);
        i++;
    }
    return maxi;
}

int main(){
    string s = "cadbzabcd";
    int ans = longestStringWithoutRepeatition(s);
    cout<<ans<<endl;
    return 0;
}