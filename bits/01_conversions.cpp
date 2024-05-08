/*
 * binary equivalent of any number  
 * computer stores 32 bits as 10 to be 000....1010
 * long long int is 64 bits
 * operators -> AND(&), OR(|), XOR(^), NOT(!), SHIFT(>>, <<) 
 * 
*/
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void decimalConversion(int num){
    cout<<( num & 1 )<<endl;
    cout<<( num | 1 )<<endl;
    cout<<( ~num )<<endl;

    /*
    * conversion to binary 
    * time complexity is o(log n)
    * space complexity is o( log n) as number of steps = number of space
    */
    vector<int> v;
    int n = num;
    while(n != 0){
        v.push_back(n%2);
        n=n/2;
    }
    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<endl;

    /*
    * conversion into octadecimal
    * time complexity is o(log n)
    * space complexity is o( log n) as number of steps = number of space
    */
    vector<int> o;
    n = num;
    while(n != 0){
        o.push_back(n%8);
        n=n/8;
    }
    for(auto i: o){
        cout<<i<<" ";
    }
    cout<<endl;  
}

void binaryConversion(int num){
    int ans = 0;
    int i=0;
    int n;
    while(num!=0){
        n = num % 10;
        ans+=n * pow(2,i);
        i++;
        num = num/10;
    }
    cout<<ans<<endl;
}

int main(){
    int num = 7;
    int bNum = 1010;
    decimalConversion(num);
    binaryConversion(bNum);
    return 0;
}