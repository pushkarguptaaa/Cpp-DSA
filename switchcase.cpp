#include<iostream>
using namespace std;
int main(){
    // char button;
    // cout<<"Input a character ";
    // cin>>button;
    // switch(button){
    //     case 'a':
    //     cout<<"Hi"<<endl;
    //     break;

    //     case 'b':
    //     cout<<"Hii"<<endl;
    //     break;

    //     case 'c':
    //     cout<<"Hii"<<endl;
    //     break;

    //     case 'd':
    //     cout<<"Hii"<<endl;
    //     break;

    //     default:
    //     cout<<"I am still learning"<<endl;
    // }

    // calculator
    float a,b;
    cout<<"Enter 2 numbers ";
    cin>>a>>b;
    char op;
    cout<<"Enter operator ";
    cin>>op;
    switch(op){
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        default:
        cout<<"enter another operator"<<endl;
    }
    return 0;
}