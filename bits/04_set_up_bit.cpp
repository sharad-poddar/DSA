/*
 * making an position's unset bit to set by both left and right shift of numbers 
 * here we can do direclty (n = n | 1 << pos - 1)
*/

#include<iostream>
using namespace std;
void setBit(int n, int pos){
    int num = n;
    int anum = 1;
    num = num >> pos-1;
    anum = anum << pos-1;

    if((num & 1) == 0){
        n = n + anum;
    }

    cout<< n <<endl;
    return;
}

int main(){
    int num = 10;
    int pos = 3;
    setBit(num, pos);
    return 0;
}


/**
 * clear the ith bit of an number
 * (n = n & ~(1 << pos - 1))
*/
#include<iostream>
using namespace std;
void setBit(int n, int pos){
    int num = n;
    num = num >> pos-1;
    int anum = 1;
    anum = anum << pos-1;

    if((num & 1) != 0){
        n = n - anum;
    }
    cout<<n<<endl;
}

int main(){
    int num = 10;
    int pos = 2;
    setBit(num, pos);
    return 0;
}