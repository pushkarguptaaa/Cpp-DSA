#include <iostream>
using namespace std;

int main(){
    // rectangle pattern
    // int rows, col;
    // cin>>rows>>col;
    // for(int i=1; i<=rows; i++){
    //     for(int j=1; j<=col; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // hollow rectangle
    // for(int i=1; i<=rows; i++){
    //     for(int j=1; j<=col; j++){
    //         if(i==1 || i==rows || j==1 || j==col){
    //             cout<<"*";
    //         } else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // inverted half pyramid
    // int n;
    // cin>>n;
    // for(int i=n; i>=1; i--){
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // half pyramid 180 degree rotation
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         if(j<=n-i){
    //             cout<<" ";
    //         } else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    // half pyramid using numbers
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // floyd's triangle
    // int n;
    // cin>>n;
    // int counter=1;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<counter<<" ";
    //         counter+=1;
    //     }
    //     cout<<endl;
    // }

    // butterfly pattern
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        int space=2*n - 2*i;
        for(int j=1; j<=space; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        int space=2*n - 2*i;
        for(int j=1; j<=space; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}