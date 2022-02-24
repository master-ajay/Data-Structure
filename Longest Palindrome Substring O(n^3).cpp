#include <iostream>
using namespace std;
int main()
{
    string s;
    //cin>>s;
    s="aaaabbaa"
    int flag=0;
    int maxlength=1;
    int start=0;
    for(int i=0;i<s.length();i++){
        for(int j=i;j<s.length();j++){
            flag=1;
            for(int k=0;k<(j-i+1);k++){
                if(s[i+k]!=s[j-k]){
                    flag=0;
                }
            }
            if(flag && (j-i+1)>maxlength){
                start=i;
                maxlength=j-i+1;
            }
        }
    }
    cout<<s.substr(start,maxlength);
}
