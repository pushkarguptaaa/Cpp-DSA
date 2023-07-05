#include <iostream>
using namespace std;

bool isPrime(int num){
    for(int i=2; i<num; i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;

}

void fib(int n){
    int t1=0;
    int t2=1;
    for(int i=1; i<=n; i++){
        cout<<t1<<" ";
        int t3=t1+t2;
        t1=t2;
        t2=t3;
    }
    cout<<endl;
    return;
}

int fact(int n){
    int fac=1;
    for(int i=n; i>=2; i--){
        fac=fac*i;
    }
    return fac;
}

int main(){
    //prime no. in a range
    // int a,b;
    // cin>>a>>b;
    // for(int i=a; i<=b; i++){
    //     if(isPrime(i)){
    //         cout<<i<<" ";
    //     }
    // }
    // cout<<endl;

    // fibonacci series
    // int n;
    // cin>>n;
    // fib(n);

    // factorial
    // int n;
    // cin>>n;
    // cout<<fact(n)<<endl;

    // combination ncr
    // int n,r;
    // cin>>n>>r;
    // int ans=fact(n)/(fact(n-r) * fact(r));
    // cout<<ans<<endl;

    // pascal triangle
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<fact(i)/(fact(i-j) * fact(j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}