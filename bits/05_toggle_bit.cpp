/*
 * toggle of the ith position's bit, 0 -> 1 or 1 -> 0
*/
#include<iostream>
using namespace std;
void toggleBit(int num, int pos){
    // it will work try this in dry run it will work as on right shift 0 is there 
    // 0 ^ 0 -> 0 && 1 ^ 0 -> 1 which is valid no problem
    num = num ^ (1 << pos-1);
    cout<<num<<endl;
}

int main(){
    int num = 10;
    int pos = 3;
    toggleBit(num, pos);
    return 0;
}


/*
 * remove the last set bit
 * here we are simply doing the n & n-1 gives us the remoed last set bit ans
 * here is the concept of the lowest number goind down by 1 makes 011...
*/ 
#include<iostream>
using namespace std;
void lastBit(int num){
   num = (num & (num-1));
   cout<<num<<endl;
   return;
}

int main(){
    int num = 10;
    lastBit(num);
    return 0;
}

/*
 * check if the number is power of 2 or not 
*/
#include<iostream>
using namespace std;
void check(int num){
   if((num & num-1) == 0){
    cout<<true;
   }
   cout<<false;
   return;
}

int main(){
    int num = 8;
    check(num);
    return 0;
}
