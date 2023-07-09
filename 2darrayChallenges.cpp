#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // matrix transpose
    // int m,n;
    // cin>>m>>n;
    // int arr[m][n];
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // for(int i=0; i<m; i++){
    //     for(int j=i; j<m; j++){
    //         int temp=arr[i][j];
    //         arr[i][j]=arr[j][i];
    //         arr[j][i]=temp;
    //     }
    // }
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // matrix  multiplication
    // int n1,n2,n3;
    // cin>>n1>>n2>>n3;
    // int m1[n1][n2];
    // int m2[n2][n3];
    // for(int i=0; i<n1; i++){
    //     for(int j=0; j<n2; j++){
    //         cin>>m1[i][j];
    //     }
    // }
    // for(int i=0; i<n2; i++){
    //     for(int j=0; j<n3; j++){
    //         cin>>m2[i][j];
    //     }
    // }
    // int ans[n1][n3];
    // for(int i=0; i<n1; i++){
    //     for(int j=0; j<n3; j++){
    //         ans[i][j]=0;
    //     }
    // }

    // for(int i=0; i<n1; i++){
    //     for(int j=0; j<n3; j++){
    //         for(int k=0; k<n2; k++){
    //             ans[i][j]+=m1[i][k]*m2[k][j];
    //         }
    //     }
    // }
    // for(int i=0; i<n1; i++){
    //     for(int j=0; j<n3; j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // matrix search
    int m,n,target;
    cin>>m>>n>>target;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int c=n-1, r=0;
    bool flag=false;
    while(r<m && c>=0){
        if(arr[r][c]==target){
            flag=true;
            break;
        }
        if(arr[r][c]>target){
            c--;
        } else{
            r++;
        }
    }
    if(flag==true){
        cout<<"found"<<endl;
    } else{
        cout<<"no"<<endl;
    }


    return 0;
}