#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    //to upper/lowercase
    // string s;
    // cin>>s;
    // for(int i=0; i<s.length(); i++){
    //     if(s[i]>='a' && s[i]<='z'){
    //         s[i]-=32;
    //     }
    // }
    // cout<<s<<endl;

    // for(int i=0; i<s.length(); i++){
    //     if(s[i]>='A' && s[i]<='Z'){
    //         s[i]+=32;
    //     }
    // }
    // cout<<s<<endl;

    // transform(s.begin(),s.end(),s.begin(),::toupper);
    // cout<<s<<endl;
    // transform(s.begin(), s.end(), s.begin(), ::tolower);
    // cout<<s<<endl;

    // form biggest no from numeric string
    // string s="437947";
    // sort(s.begin(), s.end(), greater<char>());
    // cout<<s<<endl;

    //highest frequency char
    string s="jyfehvtdsdyv";
    int freq[26];
    for(int i=0; i<26; i++){
        freq[i]=0;
    }
    
    for(int i=0; i<s.length(); i++){
        freq[s[i]-'a']++;
    }

    int maxcount=0;
    char ans='a';
    for(int i=0; i<26; i++){
        if(freq[i]>maxcount){
            maxcount=freq[i];
            ans=i+'a';
        }
    }
    cout<<ans<<" "<<maxcount<<endl;
    
    
    return 0;
}