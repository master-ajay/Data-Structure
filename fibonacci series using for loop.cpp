#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n){\
    int fib=0;
    int first=0,second=1;
    for(int i=0;i<n;i++){
        if(i<=1){
            cout<<i<<" ";
        }
        else{
            fib=first+second;
            cout<<fib<<" ";
            first=second;
            second=fib;
        }
    }
    return ;
}

int main()
{
    int n=10;
    fibonacci(10);
    return 0;
}
