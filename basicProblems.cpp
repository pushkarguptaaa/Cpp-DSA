#include <iostream>
#include<cmath>
#include<math.h>
using namespace std;

int main(){
    //prime no.
    // int n;
    // cin>>n;
    // int flag=0;
    // for(int i=2; i<=sqrt(n); i++){
    //     if(n%i==0){
    //         flag=1;
    //         break;
    //     }
    // }
    // if(flag==0){
    //     cout<<"prime"<<endl;
    // } else{
    //     cout<<"not prime"<<endl;
    // }

    //reverse a given no.
    // int n;
    // cin>>n;
    // int reverse=0;
    // while(n>0){
    //     int digit=n%10;
    //     reverse=(10*reverse) + digit;
    //     n=n/10; 
    // }
    // cout<<reverse<<endl;

    // armstrong no
    int n;
    cin>>n;
    int temp=n;
    int sum=0;
    while(temp>0){
        int digit=temp%10;
        sum+=pow(digit,3);
        temp/=10;
    }
    if(sum==n){
        cout<<"armstrong"<<endl;
    } else{
        cout<<"not"<<endl;
    }


    return 0;
}