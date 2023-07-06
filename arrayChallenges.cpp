#include <iostream>
using namespace std;

int main(){
    // max till i
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // int maxNo=INT_MIN;
    // for(int i=0; i<n; i++){
    //     maxNo=max(maxNo,arr[i]);
    //     cout<<maxNo<<" ";
    // }
    // cout<<endl;

    //sum of all subarrays
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // for(int i=0; i<n; i++){
    //     int sum=0;
    //     for(int j=i; j<n; j++){
    //         sum+=arr[j];
    //         cout<<sum<<" ";
    //     }
    // }
    // cout<<endl;

    //longest arithmetic subarray
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // int pd=arr[1]-arr[0];
    // int ans=2;
    // int curr=2;
    // for(int i=2; i<n; i++){
    //     if(pd==arr[i]-arr[i-1]){
    //         curr++;
    //     } else{
    //         pd=arr[i]-arr[i-1];
    //         curr=2;
    //     }
    //     ans=max(ans,curr);
    // }
    // cout<<ans<<endl;

    //record breaker
    int n;
    cin>>n;
    int arr[n+1];
    arr[n]=INT_MIN;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxNo=INT_MIN;
    int count=0;
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    for(int i=0; i<n; i++){
        if(arr[i]>maxNo && arr[i]>arr[i+1]){
            count++;
        }
        maxNo=max(maxNo,arr[i]);
    }
    cout<<count<<endl;



    return 0;
}