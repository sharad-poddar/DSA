/**
 * using of define keyword
*/

#include<iostream>
using namespace std;
#define LIMIT 1000
void fun2(int n){
    
    if(n <= 0)
        return;
    if(n > LIMIT)
        return;

    cout<<n<<" ";
    fun2(n*2);    
    cout<<n<<" ";
}

int main(){

    fun2(10);
    cout<<endl;
    return 0;
}