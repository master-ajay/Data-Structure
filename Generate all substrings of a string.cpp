#include<bits/stdc++.h>
using namespace std;
void subseq(string str,string ans){
    if(str.length()==0){
        cout<<ans<<" ";
        return;
    }
    
    char ch=str[0];
    str=str.substr(1);
    
    subseq(str,ans);
    subseq(str,ans+ch);
    
    
}

int main()
{
    string ans="";
    subseq("ABC",ans);
}
