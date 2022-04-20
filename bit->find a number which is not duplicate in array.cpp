#include<bits/stdc++.h>
using namespace std;
  int main(){
  int arr[]={1,1,2,2,3,4,3,5,5};
  int xore=arr[0];
  int n=sizeof(arr)/sizeof(arr[0]);
  for(int i=1;i<n;i++){
    xore=xore^arr[i];
  }
  cout<<xore;
}
