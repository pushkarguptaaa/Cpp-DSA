#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // int savings;
    // cin>>savings;
    // if(savings>5000){
    //     cout<<"Neha";
    //  if(savings>10000){
    //     cout<<"Roadtrip with Neha";
    // } else{
    //     cout<<"Shopping with Neha";
    // }
    // } 
    // else if(savings>2000){
    //     cout<<"Rashmi";
    // } else{
    //     cout<<"Friends";
    // }

    // Max
    // int a,b,c;
    // cin>>a>>b>>c;
    // if(a>b){
    //     if(a>c){
    //         cout<<a;
    //     } else{
    //         cout<<c;
    //     }
    // } else{
    //     if(b>c){
    //         cout<<b;
    //     } else{
    //         cout<<c;
    //     }
    // }

    // Odd even
    int a;
    cin>>a;
    if(a%2==0){
        cout<<"even";
    } else{
        cout<<"odd";
    }
    return 0;
}