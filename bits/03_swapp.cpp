/*
 * swapping of the two numbers 
*/
#include<iostream>
using namespace std;
void swap1(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int &a, int &b){
    /*
     * xor of same number is same 
    */
    a = a^b;
    b = a^b;
    a = a^b;
}

int main(){
    int a = 10, b = 3;
    cout<<a<<" "<<b<<endl;
    swap1(a,b);
    cout<<a<<" "<<b<<endl;
    swap2(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}


/*
 * check if the bit us set or not 
 * if position bit is 0 then it is not set
 * if it is 1 then it is set
*/
#include<iostream>
using namespace std;
bool isSet(int num, int pos){

    int i=0;
    num = num >> pos-1;    
    cout<<num<<endl;
    if(num & 1 == 1){
        return true;
    }
    return false;
}

int main(){
    int n = 7;
    int pos = 3;
    bool ans = isSet(n, pos);
    cout<<ans<<endl;
    return 0;
}
