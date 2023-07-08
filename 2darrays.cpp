#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    //input
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    //print
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //search
    // int k;
    // cin>>k;
    // bool flag=0;
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         if(arr[i][j]==k){
    //             cout<<i<<" "<<j<<endl;
    //             flag=1;
    //             break;
    //         }
    //     }
    // }
    // if(flag){
    //     cout<<"found"<<endl;
    // } else{
    //     cout<<"no"<<endl;
    // }

    //spiral order matrix traversal
    int rowst=0, colst=0, rowen=m-1, colen=n-1;
    while(rowst<=rowen && colst<=colen){
        for(int col=colst; col<=colen; col++){
            cout<<arr[rowst][col]<<" ";
        }
        rowst++;
        for(int row=rowst; row<=rowen; row++){
            cout<<arr[row][colen]<<" ";
        }
        colen--;
        for(int col=colen; col>=colst; col--){
            cout<<arr[rowen][col]<<" ";
        }
        rowen--;
        for(int row=rowen; row>=rowst; row--){
            cout<<arr[row][colst]<<" ";
        }
        colst++;
    } 


    return 0;
}