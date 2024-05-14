// xor of a number from given range
// xor from 1 to 10
// 1 ^ 2 ^ 3 ^ 4 ^ 5 ^ 6 ^ 7 ^ 8 ^ 9 ^ 10
// 001 ^ 010 ^ 011 ^ 100 ^ 101 ^ 110 ^ 111 ^ 1000 ^ 1001 ^ 1010 
// pattern -> 
// 1 -> 1
// 1 ^ 2 -> 3
// 1 ^ 2 ^ 3 -> 0
// 1 ^ 2 ^ 3 ^ 4 -> 4
// 5 -> 1
// 6 -> 7
// 7 -> 0
// 8 -> 8
// .. 

#include<iostream>
using namespace std;
int xorRange(int end){
    if((end % 4) == 1){
        return 1;
    }else if((end % 4 == 2)){
        return end + 1;
    }else if((end % 4 == 3)){
        return 0;
    }else{
        return end;
    }
}

int main(){
    int end = 10;
    int ans = xorRange(end);
    cout<<ans<<endl;
    return 0;
}

// time complexity is o(1)
// space complexity is o(1)


// add on question on above topic
// finding xor from L to R
// means start is diff and end is diff
// L -> 1 to L
// R -> 1 to R -> 1 to L to R
// 1 to L-1 -> findable
#include<iostream>
using namespace std;
int xorRange(int end){
    if((end % 4) == 1){
        return 1;
    }else if((end % 4 == 2)){
        return end + 1;
    }else if((end % 4 == 3)){
        return 0;
    }else{
        return end;
    }
}

int main(){
    int start = 5;
    int end = 10;
    int ans;
    int L = xorRange(start-1);
    int R = xorRange(end);
    // same or common will become 0
    ans = L ^ R; 
    cout<<ans<<endl;
    return 0;
}

// time complexity is o(1)
// space complexity is o(1)