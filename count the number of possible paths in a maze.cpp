#include <bits/stdc++.h>
using namespace std;

int countPaths(int m,int n){
    
    if(n==1 || m==1){
        return 1;
    }
    return countPaths(m-1,n)+countPaths(m,n-1);
}

int main()
{
    cout<<countPaths(3,3);
    return 0;
}
