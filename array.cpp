#include <iostream>
#include <climits>
using namespace std;

int main(){
    // int arr[4]={1,2,3,4};
    // cout<<arr[3]<<endl;

    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // max and min
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int minNo=INT_MAX;
    int maxNo=INT_MIN;
    for(int i=0; i<n; i++){
        // if(arr[i]>maxNo){
        //     maxNo=arr[i];
        // }
        // if(arr[i]<minNo){
        //     minNo=arr[i];
        // }
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
    }
    cout<<maxNo<<" "<<minNo<<endl;

    return 0;
}