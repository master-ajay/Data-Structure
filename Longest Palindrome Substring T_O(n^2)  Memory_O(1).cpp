#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    string longestPalin (string S) {
        // code here
        int length_Of_String = S.size();
        if(length_Of_String<2)
            return S;
        
        int low,high,start=0;
        int maxlength_Of_Palindrome=1;
        for(int i=0;i<length_Of_String;i++){
            low=i-1;
            high=i+1;
            while(high<length_Of_String && S[i]==S[high]){
                high++;
            }
            while(low>=0 && S[i]==S[low]){
                low--;
            }
            while(low>=0 && high<length_Of_String && S[low]==S[high]){
                low--;
                high++;
            }
            
            int length_Of_Palindrome=high-low-1;
            if(maxlength_Of_Palindrome<length_Of_Palindrome){
                maxlength_Of_Palindrome=length_Of_Palindrome;
                start=low+1;
            }
        }
        return S.substr(start,maxlength_Of_Palindrome);
    }
};


int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
