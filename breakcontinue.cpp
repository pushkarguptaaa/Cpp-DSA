#include <iostream>
using namespace std;
int main(){
    // int pocketMoney=3000;
    // for(int date=1;date<=30;date++){
    //     if(date%2==0){
    //         continue;
    //     }
    //     if(pocketMoney==0){
    //         break;
    //     }
    //     cout<<"Go today"<<endl;
    //     pocketMoney-=300;
    // }

    // for(int i=1;i<=100;i++){
    //     if(i%3==0){
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }

    //prime
    // int n;
    // cin>>n;
    // int i;
    // for(i=2;i<n;i++){
    //     if(n%i==0){
    //         cout<<"non prime"<<endl;
    //         break;
    //     }
    // }
    // if(i==n){
    // cout<<"Prime"<<endl;
    // }

    //prime in a range
    int n1,n2;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++){
        int j;
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<i<<endl;
        }
    }
    return 0;
}