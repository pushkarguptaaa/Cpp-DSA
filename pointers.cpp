#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void increment(int *c){
    *c+=1;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // int a=10;
    // int *aptr=&a;
    // cout<<*aptr<<endl;
    // *aptr=20;
    // cout<<a<<endl;

    //pointers and arrays
    // int arr[]={1,2,3};
    // cout<<*arr<<endl;
    // int *ptr=arr;
    // for(int i=0; i<3; i++){
    //     cout<<*ptr<<endl;
    //     ptr++;
    // }
    // for(int i=0; i<3; i++){
    //     cout<<*(arr+i)<<endl;
    // }

    //pointer to pointer
    // int a=10;
    // int *p;
    // p=&a;
    // int **q=&p;
    // cout<<*q<<endl;
    // cout<<**q<<endl;

    //passing pointers to function
    int a=10;
    int b=20;

    // int *aptr=&a;
    // int *bptr=&b;
    // swap(aptr,bptr);
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;

    int c=30;
    increment(&c);
    cout<<c<<endl;

    return 0;
}