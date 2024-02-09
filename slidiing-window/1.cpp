/**
 * origin of sliding window
 * brute, Identify, types of sliding window
 * problem -> array with number(size of subarray), max sum of that 
 * subarray means continous part
 * 
 * steps: 
 * make the static part
 * make the moving dynamic part
*/


/* Brute Force */
#include<iostream>
using namespace std;
int main(){

    int arr[] = {1,4,3,2,6,7,4,0};
    int n=3;
    int size = sizeof(arr)/sizeof(int);
    int min = INT_MIN;

    // make sure movement of array be seen from 0 to n-2 as fir given n
    for(int i=0;i<size-2;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            sum+= arr[i+j];
        }
        cout<<"sum -> "<<sum<<endl;

        if(sum > min){
            min = sum;
            cout<<"min -> "<<min<<endl;
        }
    }

    cout<<"the max sum: "<<min<<endl;
    return 0;
}




/* Moderate Approach */
// again and again we are not summing up things
#include<iostream>
using namespace std;
int main(){

    int arr[] = {1,4,3,2,6,7,4,0};
    int n=3;
    int size = sizeof(arr)/sizeof(int);
    int min = INT_MIN;
    int j;
    int i=0;
    int sum=0;

    while(j<=size){
        // making of slide 
        if(j<n){
            for(j=0;j<n;j++){
                sum+=arr[j];
            }
            cout<<"sum -> "<<sum<<endl;
        }

        if(sum > min){
            min = sum;
            cout<<"min -> "<<min<<endl;
        }

        // moving slide forward
        // make sure window will always contionus
        sum+=arr[j]-arr[i];
        cout<<"sum -> "<<sum<<endl;
        j++;
        i++;
    }

    cout<<"max sum: "<<min<<endl;
    return 0;
}


/**
 * point of identity -> 
 * subarray in array or string
 * k window size, largest or minimum
*/





/**
 * minimum sum of subarray k in an array 
 * sliding window
 * window size was always of (j-i+1)
 * mainly used both while in sliding window
*/
#include<iostream>
using namespace std;
int main(){

    int arr[] = {1,4,3,2,6,7,4,0};
    int n=3;
    int size = sizeof(arr)/sizeof(int);
    int maxi = INT_MAX;
    int i=0,j=0;
    int sum=0;

    // conditions
    while(j<=size){
        // making an window
        if(j<n){
            for(j=0;j<n;j++){
                sum+=arr[j];
            }
            cout<<"sum -> "<<sum<<endl;
        }

        // checking for minimum
        cout<<"sum init -> "<<sum<<endl;
        if(sum < maxi){
            maxi=sum;
            cout<<"maxi -> "<<maxi<<endl;
        }

        // slides the window
        // mainting the size of window
        sum+=arr[j]-arr[i];
        cout<<"sum -> "<<sum<<endl;
        j++;
        i++;
    }

    cout<<"maxi -> "<<maxi<<endl;
    return 0;
}


