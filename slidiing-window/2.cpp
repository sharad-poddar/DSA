/**
 * finding first negative number in every k size sub array of array
 * sliding window
 * brute force
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    int arr[] = {2,-1,4,-4,-6,2,3,1,-9,0};
    int size = sizeof(arr)/sizeof(int);
    int n=3;
    vector<int> v;
    int j=0,i=0;

    for(int i=0;i<=size-n;i++){
        for(int j=i;j<i+n;j++){
            if(arr[j]<0){
                cout<<i<<" "<<arr[j]<<endl;
                v.push_back(arr[j]);
                break;
            }
        }
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    return 0;
}




/**
 * sliding window takes less time complexity
*/
#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){
    
    int arr[] = {2,-1,4,-4,-6,2,3,1,-9,0};
    int size = sizeof(arr)/sizeof(int);
    int n=3;
    vector<int> vans;
    // In List we can do both front and back option
    list<int> v;
    int j=0,i=0;

    while(j<size){
        // makign of slide
        if(j-i+1<n){
            while(j-i+1<n){
                if(arr[j]<0){
                    v.push_back(arr[j]);
                }
                j++;
            }
        }else{
            // part of window sliding
            if(arr[j]<0){
                v.push_back(arr[j]);
            }

            // calculation as ususal
            if(v.size() == 0){
                vans.push_back(0);
            }else{
                vans.push_back(v.front());
            }

            // shifting the slide or slide the window
            if(v.front() == arr[i]){
                v.pop_front();
            }
            j++;
            i++;
        }

    }

    for(int i=0;i<vans.size();i++){
        cout<<vans[i]<<" ";
    }

    cout<<endl;
    return 0;
}
