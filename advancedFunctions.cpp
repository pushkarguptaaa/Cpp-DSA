#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int sumupton(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    return sum;
}

bool checkpyth(int a, int b, int c ){
    int x=(max(a,max(b,c)));
    int y,z;
    if(a==x){
        y=b;
        z=c;
    } else if(b==x){
        y=a;
        z=c;
    } else{
        y=a;
        z=b;
    }
    if(x*x==y*y+z*z){
        return true;
    }
    return false;
    
}

int binarytodec(int n){
    int sum=0;
    int x=1;
    while(n>0){
        int digit=n%10;
        sum+=digit*x;
        x*=2;
        n/=10;
    }
    return sum;
}

int octaltodec(int n){
    int sum=0;
    int x=1;
    while(n>0){
        int digit=n%10;
        sum+=digit*x;
        x*=8;
        n/=10;
    }
    return sum;
}

int hextodec(string n){
    int sum=0;
    int x=1;
    for(int i=n.size()-1; i>=0; i--){
        if(n[i]>='0' && n[i]<='9'){
            sum+=(n[i]-'0')*x;
        } else if(n[i]>='A' && n[i]<='F'){
            sum+=(n[i]-'A'+10)*x;
        }
        x*=16;
    }
    return sum;
}

int dectobin(int n){
    int sum=0;
    int x=1;
    while(x<=n){
        x*=2;
    }
    x/=2;
    
    while(x>0){
        int digit=n/x;
        n-=digit*x;
        x/=2;
        sum=(sum*10) + digit;
    }
    return sum;
}

int dectooct(int n){
    int sum=0;
    int x=1;
    while(x<=n){
        x*=8;
    }
    x/=8;

    while(x>0){
        int digit=n/x;
        n-=digit*x;
        x/=8;
        sum=(sum*10)+digit;
    }
    return sum;
}

string dectohex(int n){
    int x=1;
    string sum="";
    while(x<=n){
        x*=16;
    }
    x/=16;
    while(x>0){
        int digit=n/x;
        n-=digit*x;
        x/=16;
        if(digit<=9){
            sum+=to_string(digit);
        } else{
            char c='A'+digit-10;
            sum.push_back(c);
        }
    }
    return sum;

}

int addbin(int a, int b){
    int dec1=binarytodec(a);
    int dec2=binarytodec(b);
    int sum=dec1+dec2;
    int ans=dectobin(sum);
    return ans;
}

int main(){
    //sum upto n
    // int n;
    // cin>>n;
    // cout<<sumupton(n)<<endl;

    //pythagorean triplet
    // int a,b,c;
    // cin>>a>>b>>c;
    // cout<<checkpyth(a,b,c)<<endl;

    // binary to dec
    // int n;
    // cin>>n;
    // cout<<binarytodec(n)<<endl;

    //octal to dec
    // int n;
    // cin>>n;
    // cout<<octaltodec(n)<<endl;

    //hexatodec
    // string n;
    // cin>>n;
    // cout<<hextodec(n)<<endl;

    //dec to binary
    // int n;
    // cin>>n;
    // cout<<dectobin(n)<<endl;

    //dec to octal
    // int n;
    // cin>>n;
    // cout<<dectooct(n)<<endl;

    //dec to hexadec
    // int n;
    // cin>>n;
    // cout<<dectohex(n)<<endl;

    //add 2 binary no
    int a,b;
    cin>>a>>b;
    cout<<addbin(a,b)<<endl;

    return 0;
}