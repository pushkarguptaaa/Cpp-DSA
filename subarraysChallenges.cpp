#include <iostream>
using namespace std;

int kadence(int arr[], int n){
    int sum=0;
    int maxsum=INT_MIN;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        maxsum=max(maxsum,sum);
    }
    return maxsum;
}

int pairsum(int arr[],int n,int k){
    // for(int i=0; i<n-1; i++){
    //     for(int j=1; j<n; j++){
    //         if(arr[i]+arr[j]==k){
    //             cout<<i<<" "<<j<<endl;
    //             return true;
    //         }
    //     }
    // }
    // return false;

    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        } else if(arr[low]+arr[high]>k){
            high--;
        } else{
            low++;
        }
    }
    return false;
}

int main(){
    // print subarrays
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n; j++){
    //         for(int k=i; k<=j; k++){
    //             cout<<arr[k]<<" ";
    //         } cout<<endl;
    //     }
    // }

    // maximum subarray sum
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // int maxNo=INT_MIN;
    // for(int i=0; i<n; i++){
    //     int sum=0;
    //     for(int j=i; j<n; j++){
    //         sum+=arr[j];
    //         maxNo=max(maxNo,sum);
    //     }
    // }
    // cout<<maxNo<<endl;

    //cumulative sum approach
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // int currsum[n+1];
    // currsum[0]=0;
    // for(int i=1; i<=n; i++){
    //     currsum[i]= currsum[i-1] + arr[i-1];
    // }
    // int maxsum=INT_MIN;
    // for(int i=1; i<=n; i++){
    //     int sum=0;
    //     for(int j=0; j<i; j++){
    //         sum=currsum[i]-currsum[j];
    //         maxsum=max(maxsum,sum);
    //     }
    // }
    // cout<<maxsum<<endl;

    //kadane's algorithm
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // int maxsum=INT_MIN;
    // int sum=0;
    // for(int i=0; i<n; i++){
    //     sum+=arr[i];
    //     if(sum<0){
    //         sum=0;
    //     }
    //     maxsum=max(maxsum,sum);
    // }
    // cout<<maxsum<<endl;

    //maximum circular subarray
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // int sumarr=0;
    // int nonwrapsum= kadence(arr,n);
    // for(int i=0; i<n; i++){
    //     sumarr+=arr[i];
    //     arr[i]=-arr[i];
    // }
    // int wrapsum=sumarr + kadence(arr,n);
    // int maxsubarray=max(wrapsum,nonwrapsum);
    // cout<<maxsubarray<<endl;

    //pair sum problem
    int arr[]={2,4,7,11,14,16,20,21};
    int k=31;
    cout<<pairsum(arr,8,k)<<endl;

    // return 0;
}