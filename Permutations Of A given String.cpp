// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    void helper(string s,int l,int r,vector<string> &ans){
        if(l==r){
            ans.push_back(s);
        }
        else{
            for(int i=l;i<=r;i++){
                char a=s[l];
                s[l]=s[i];
                s[i]=a;
                
                helper(s,l+1,r,ans);
                
                char b=s[l];
                s[l]=s[i];
                s[i]=b;
            }
        }
    }
    
	public:
		vector<string>find_permutation(string S)
		{
		 vector<string> ans;
		 helper(S,0,S.size()-1,ans);
		 sort(ans.begin(),ans.end());
		 return ans;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends
