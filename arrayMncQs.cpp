#include <iostream>
using namespace std;

int main(){
    //first repeating element
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // const int N=1e6+2;
    // int idx[N];
    // for(int i=0; i<N; i++){
    //     idx[i]=-1;
    // }
    // int minIdx =INT_MAX;
    // for(int i=0; i<n; i++){
    //     if(idx[arr[i]]!=-1){
    //         minIdx=min(minIdx,idx[arr[i]]);
    //     } else{
    //         idx[arr[i]]= i;
    //     }
    // }
    // if(minIdx==INT_MAX){
    //     cout<<-1<<endl;
    // } else{
    //     cout<<minIdx+1<<endl;;
    // }

    //record breaker
    // int n;
    // cin>>n;
    // int arr[n+1];
    // arr[n]=INT_MIN;
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // int maxNo=INT_MIN;
    // int count=0;
    // if(n==1){
    //     cout<<1<<endl;
    //     return 0;
    // }
    // for(int i=0; i<n; i++){
    //     if(arr[i]>maxNo && arr[i]>arr[i+1]){
    //         count++;
    //     }
    //     maxNo=max(maxNo,arr[i]);
    // }
    // cout<<count<<endl;

    //subarray with given sum
    // int n,s;
    // cin>>n>>s;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // int i=0, j=0, st=-1, en=-1, sum=0;
    // while(sum+arr[j]<=0 && j<n){
    //     sum+=arr[j];
    //     j++;
    // }
    // if(sum==s){
    //     cout<<i+1<<" "<<j<<endl;
    //     return 0;
    // }
    // while(j<n){
    //     sum+=arr[j];
    //     while(sum>s){
    //         sum-=arr[i];
    //         i++;
    //     }
    //     if(sum==s){
    //         st=i+1;
    //         en=j+1;
    //         break;
    //     }
    //     j++;
    // }
    // cout<<st<<" "<<en<<endl;

    //smallest positive missing number
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    const int N=1e6+2;
    int check[N];
    for(int i=0; i<N; i++){
        check[i]=0;
    }
    for(int i=0;i<n; i++){
        if(arr[i]>0){
            check[arr[i]]=1;
        }
    }
    int ans=-1;
    for(int i=1; i<N; i++){
        if(check[i]==0){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;


    return 0;
    
}