/*
 * minimum bits needed to flip a number, as like moving from 10 to 7
*/
#include<iostream>
using namespace std;
int minBit(int gnum, int wnum){
    
    // all the changes digits become set bit
    int num = gnum ^ wnum;
    // finding number of set bits
    int c = 0;
    while(num!=0){
        num = num & (num-1);
        c++;
    }
    return c;
}
int main(){
    int gnum = 10;
    int wnum = 7;
    int ans = minBit(gnum, wnum);
    cout<<ans<<endl;
    return 0;
}