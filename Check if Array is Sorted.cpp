#include <bits/stdc++.h>
using namespace std;

int check_sorted_array(int arr[],int n){
    if(n==1){
        return 1;
    }
    if(arr[n-1]<arr[n-2])
        return 0;
    return check_sorted_array(arr,n-1);
    
}

int main()
{
    int arr[]={1,2,3,3,5};
    int n=5;
    if(check_sorted_array(arr,n)){
        cout<<"sorted";
    }
    else
        cout<<"Unsorted";
    return 0;
}
