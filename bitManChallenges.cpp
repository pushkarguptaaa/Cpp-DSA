#include <iostream>
using namespace std;

int isPowerofTwo(int n){
    return(n && !(n & n-1));
}

int ones(int n){
    int count=0;
    while(n){
        n=n & n-1;
        count++;
    }
    return count;
}

int printSubsets(int arr[], int n){
    for(int i=0; i<(1<<n); i++){
        for(int j=0; j<n; j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    //power of 2
    cout<<isPowerofTwo(8)<<endl;

    // number of ones
    cout<<ones(5)<<endl;

    // print subsets
    int arr[4]={1,2,3,4};
    printSubsets(arr,4);

    return 0;
}