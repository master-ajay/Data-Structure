#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s="aaaabbaaca";
    int string_size = s.size();
    bool table[string_size][string_size];
    memset(table,0,string_size);
    
    int start=0;
    
    int maxlength = 1;
    
    for(int i=0;i<string_size;i++){  //single char
        table[i][i]=true;
    }
    
    for(int i=0;i<string_size-1;i++){ //pair of two char substrings will palindrome check
        if(s[i]==s[i+1]){
            table[i][i+1]=true;
            maxlength=2;
        }
    }
    int j=0;
    for(int k=3;k<=string_size;k++){ //length of substrings k to check palindrome
        for(int i=0;i<string_size-k+1;i++){ //start position of substring 
            j=i+k-1;                              //end position of substring
            if(table[i+1][j-1]==true && s[i]==s[j]){
                table[i][j]=true;
                if(maxlength<k){
                    start=i;
                    maxlength=k;
                }
            }
        }
    }
    cout<<s.substr(start,maxlength);
}
