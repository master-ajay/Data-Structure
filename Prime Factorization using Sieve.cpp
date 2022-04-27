#include <iostream>
using namespace std;

void SOE(int n){
    int arr[n+1];
    for(int i=0;i<n+1;i++){
        arr[i]=i;
    }
    
    for(int i=2;i<=n;i++){
        if(arr[i]==i){
            for(int j=i*i;j<=n;j+=i){
                arr[j]=i;
            }
        }
    }
    
    while(n!=1){
        cout<<arr[n]<<" ";
        n=n/arr[n];
    }
}

int main()
{
    SOE(18);
}
