#include <bits/stdc++.h>//O(n) and space=O(1)
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int b[n];
	for(int i=0;i<n;i++){
	    b[i]=0;
	}
	sort(arr,arr+n);
	int p=0,q=n-1;
	for(int i=0;i<n;i++){
	        if(i%2!=0)
	        {
	            b[i]=arr[p];
	            p++;
	        }
	        else{
	            b[i]=arr[q];
	            q--;
	        }
	}
	printArray(b,n);
	return 0;
}


//arr[arr[i]]=(arr[i]+arr[arr[i]])-(arr[i]=arr[arr[i]])
