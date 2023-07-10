#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string str;
    // cin>>str;
    // cout<<str<<endl;

    // string str1(5,'n');
    // cout<<str1<<endl;

    // string str2;
    // getline(cin,str2);
    // cout<<str2<<endl;

    string s1="fam";
    string s2="ily";
    // s1.append(s2);
    s1=s1+s2;
    cout<<s1<<endl;
    cout<<s1[1]<<endl;

    string abc="ifnnf jfnr";
    cout<<abc<<endl;
    abc.clear();
    if(abc.empty()){
        cout<<"it is empty"<<endl;
    }

    string s3="abc";
    string s4="abc";
    // cout<<s4.compare(s3)<<endl;
    if(s3.compare(s4)==0){
        cout<<"they are equal"<<endl;
        }
    if(!s3.compare(s4)){
        cout<<"they are equal"<<endl;
        }
    
    string s5="nincompoop";
    s5.erase(3,2);
    cout<<s5<<endl;
    cout<<s5.find("nmp")<<endl;
    s5.insert(2,"lol");
    cout<<s5<<endl;
    cout<<s5.size()<<endl;
    cout<<s5.length()<<endl;

    for(int i=0; i<s5.size(); i++){
        cout<<s5[i]<<endl;
    }

    cout<<s5.substr(7,4)<<endl;
    string s6="45";
    int n=stoi(s6);
    cout<<n+2<<endl;

    string s7=to_string(n);
    cout<<s7+"2"<<endl;

    string s8="hvkvyuynkcxx";
    sort(s8.begin(),s8.end());
    cout<<s8<<endl;


    return 0;
}