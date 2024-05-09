/*
 * count the number of set bit
 * simply traversing all the bits and checking if the bit is set or not
*/
#include<iostream>
using namespace std;
int count(int num){
    int n = num;
    int c = 0;
    while(n != 0){
        int r = (n & 1);
        if(r == 1){
            c++;
        }
        n = n >> 1;
    }
    return c;
}

/*
 * here every time the single bit gets down makes us count the number of set bit
*/
int anotherWay(int num){
    int n = num;
    int c = 0;
    while(n != 0){
        n = (n & (n-1));
        c++;
    }
    return c;
}
int main(){
    int num = 10;
    int ans = count(num);
    int aans = anotherWay(num);
    cout<<ans<<endl;
    cout<<aans<<endl;
}