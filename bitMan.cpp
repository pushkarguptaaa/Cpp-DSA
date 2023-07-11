#include <iostream>
using namespace std;

int getBit(int n, int pos){
    return((n & (1<<pos))!=0);
}

int setBit(int n, int pos){
    return(n | (1<<pos));
}

int clearBit(int n, int pos){
    int mask=~(1<<pos);
    return(n & mask);
}

int updateBit(int n, int pos, int val){
    int mask=~(1<<pos);
    n=n & mask;
    return(n | val<<pos);
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    //getbit
    cout<<getBit(5,2)<<endl;

    //setbit
    cout<<setBit(5,1)<<endl;

    //clearBit
    cout<<clearBit(5,2)<<endl;

    //updatebit
    cout<<updateBit(5,0,0)<<endl;

    return 0;
}