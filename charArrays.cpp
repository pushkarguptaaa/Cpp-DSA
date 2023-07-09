#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // char arr[100]="apple";
    // int i=0;
    // while(arr[i]!='\0'){
    //     cout<<arr[i]<<" ";
    //     i++;
    // }

    // char arr[100];
    // cin>>arr;
    // cout<<arr[2];

    //check palindrome
    // int n;
    // cin>>n;
    // char arr[n+1];
    // cin>>arr;
    // bool flag=1;
    // for(int i=0; i<n; i++){
    //     if(arr[i]!=arr[n-1-i]){
    //         flag=0;
    //         break;
    //     }
    // }
    // if(flag==1){
    //     cout<<"yes"<<endl;
    // } else{
    //     cout<<"no"<<endl;
    // }

    //largest word in a sentence
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i=0;
    int maxlen=0, currlen=0, maxst=0, st=0;
    while(1){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(currlen>maxlen){
            maxlen=currlen;
            maxst=st;
            }
            st=i+1;
            currlen=0;
        } else{
        currlen++;
        }
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxlen<<endl;
    for(int i=0; i<maxlen; i++){
        cout<<arr[i+maxst];
    }
    cout<<endl;
    return 0;
}