
/**
 * Write a program and recurrence relation to find the Factorial of n where n>2 . 
 * Mathematical Equation
 * time complity o(n)
 * space complexity o(n)
*/

#include<iostream>
using namespace std;
int Factorial(int n){

    if(n==1 || n==0){
        return 1;
    }

    int ans = n*Factorial(n-1);
    cout<<ans<<" ";
    return ans;

}

int main(){
    
    int n;
    cout<<"n: ";
    cin>>n;
    cout<<Factorial(n)<<endl;
    return 0;
}

/**
 * input 5
 * return 5*Fact(4)
 * return 4*Fact(3)
 * return 3*Fact(2)
 * return 2*Fact(1) 
*/