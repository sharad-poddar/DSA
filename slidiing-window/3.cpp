/**
 * finding the number of occorence of anagrams 
 * like for -> for, orf, ....
 * number of letter must be same
 * continous
 * sliding window
*/

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){

    string s = "for";
    int len = s.length();
    string ss = 'fororfforffor';
    unordered_map<char,int> m;
    int i=0,j=0;
    int count=0;

    for(int i=0;i<len;i++){
        m[s[i]]++;
    }

    while(j<len){
        
        // making an window
        if(j-i+1<len){
            while(j-i+1<len){
                m[s[j]]--;
                j++;
            }
        }else{
            // calculation
            


            //sliding the window
            m[ss[i]]++;
            i++;
            m[ss[j]]--;
            j++;
        }
    }

}